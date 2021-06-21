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
#include "stdafx.h"
#include "FEBioInterface.h"
#include "FEBioClass.h"
#include <FEMLib/FEModelComponent.h>
using namespace std;

vec3d qvariant_to_vec3d(const QVariant& v)
{
	QList<QVariant> val = v.value<QList<QVariant> >();
	vec3d w;
	w.x = val.at(0).toDouble();
	w.y = val.at(1).toDouble();
	w.z = val.at(2).toDouble();
	return w;
}

void FEBio::CreateFSObject(int classId, FEModelComponent* po)
{
	// create the FEBioClass object
	FEBioClass* feb = FEBio::CreateFEBioClass(classId);
	if (feb == nullptr) return;

	// set the type string
	string typeStr = feb->TypeString();
	po->SetTypeString(strdup(typeStr.c_str()));

	// copy the parameters from the FEBioClass to the FSObject
	for (int i = 0; i < feb->Parameters(); ++i)
	{
		FEBio::FEBioParam& param = feb->GetParameter(i);
		QVariant v = param.m_val;

		int type = param.type();

		// TODO: The name needs to copied in the FSObject class!! 
		const char* szname = strdup(param.name().c_str());

		switch (type)
		{
		case FEBio::FEBIO_PARAM_INT   : po->AddIntParam(v.toInt(), szname); break;
		case FEBio::FEBIO_PARAM_BOOL  : po->AddBoolParam(v.toBool(), szname); break;
		case FEBio::FEBIO_PARAM_DOUBLE: po->AddDoubleParam(v.toDouble(), szname); break;
		case FEBio::FEBIO_PARAM_VEC3D : po->AddVecParam(qvariant_to_vec3d(v), szname); break;
		case FEBio::FEBIO_PARAM_DOUBLE_MAPPED: po->AddDoubleParam(v.toDouble(), szname)->MakeVariable(true); break;
		case FEBio::FEBIO_PARAM_VEC3D_MAPPED : po->AddVecParam(qvariant_to_vec3d(v), szname); break;
		default:
			assert(false);
		}
	}

	delete feb;
}
