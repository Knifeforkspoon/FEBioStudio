/*This file is part of the FEBio Studio source code and is licensed under the MIT license
listed below.

See Copyright-FEBio-Studio.txt for details.

Copyright (c) 2020 University of Utah, The Trustees of Columbia University in 
the City of New York, and others.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.*/

#include "ImageFilter.h"
#include <PostLib/ImageModel.h>
#include <ImageLib/ITKImage.h>

#include "itkImage.h"
#include "itkMeanImageFilter.h"
#include "itkSmoothingRecursiveGaussianImageFilter.h"
#include <chrono>
#include <ctime>
#include <iostream>


CImageFilter::CImageFilter(Post::CImageModel* model) : model(model)
{

}

MeanImageFilter::MeanImageFilter(Post::CImageModel* model) : CImageFilter(model)
{
    static int n = 1;

    char sz[64];
    sprintf(sz, "MeanImageFilter%02d", n);
    n += 1;
    SetName(sz);

    AddIntParam(1, "x Radius");
    AddIntParam(1, "y Radius");
    AddIntParam(1, "z Radius");
}

void MeanImageFilter::ApplyFilter()
{
    CITKImage* image = dynamic_cast<CITKImage*>(model->GetImageSource()->Get3DImage());

    if(!image) return;

    auto start = std::chrono::system_clock::now();

    using PixelType = unsigned char;
    using ImageType = itk::Image<PixelType, 3>;

    using FilterType = itk::MeanImageFilter<ImageType, ImageType>;
    FilterType::Pointer filter = FilterType::New();

    ImageType::SizeType indexRadius;

    indexRadius[0] = GetIntValue(0); // radius along x
    indexRadius[1] = GetIntValue(1); // radius along y
    indexRadius[2] = GetIntValue(2); // radius along z

    filter->SetRadius(indexRadius);

    itk::SmartPointer<itk::Image<unsigned char, 3>> itkImage = image->GetItkImage();

    filter->SetInput(itkImage);

    model->GetImageSource()->GetImageToFilter()->SetItkImage(filter->GetOutput());
    model->GetImageSource()->GetImageToFilter()->Update();

    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;

    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
}

GaussianImageFilter::GaussianImageFilter(Post::CImageModel* model)
    : CImageFilter(model)
{
    static int n = 1;

    char sz[64];
    sprintf(sz, "GaussianImageFilter%02d", n);
    n += 1;
    SetName(sz);

    AddDoubleParam(2.0, "sigma");
}

void GaussianImageFilter::ApplyFilter()
{
    CITKImage* image = dynamic_cast<CITKImage*>(model->GetImageSource()->Get3DImage());

    if(!image) return;

    auto start = std::chrono::system_clock::now();

    using PixelType = unsigned char;
    using ImageType = itk::Image<PixelType, 3>;

    using FilterType = itk::SmoothingRecursiveGaussianImageFilter<ImageType, ImageType>;

    FilterType::Pointer filter = FilterType::New();
    filter->SetNormalizeAcrossScale(false);

    itk::SmartPointer<itk::Image<unsigned char, 3>> itkImage = image->GetItkImage();

    filter->SetInput(itkImage);

    const double sigma = GetFloatValue(0);
    std::cout << sigma << std::endl;
    filter->SetSigma(sigma);

    model->GetImageSource()->GetImageToFilter()->SetItkImage(filter->GetOutput());

    model->GetImageSource()->GetImageToFilter()->Update();

    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;

    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
}

ThresholdImageFilter::ThresholdImageFilter(Post::CImageModel* model)
    : CImageFilter(model)
{
    static int n = 1;

    char sz[64];
    sprintf(sz, "ThresholdImageFilter%02d", n);
    n += 1;
    SetName(sz);

    AddIntParam(255, "max");
    AddIntParam(0, "min");
}

void ThresholdImageFilter::ApplyFilter()
{
    C3DImage* image = model->GetImageSource()->Get3DImage();

    int max = GetIntValue(0);
    int min = GetIntValue(1);

    if(min >= max) return;

    auto start = std::chrono::system_clock::now();

    Byte* originalBytes = image->GetBytes();
    Byte* filteredBytes = model->GetImageSource()->GetImageToFilter(true)->GetBytes();

    int factor = 255;

    for(int i = 0; i < image->Width()*image->Height()*image->Depth(); i++)
    {
        if(originalBytes[i] > max || originalBytes[i] < min)
        {
            filteredBytes[i] = 0;
        }
        else
        {
            filteredBytes[i] = originalBytes[i];
        }

    }

    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;

    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
}