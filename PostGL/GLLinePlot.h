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

#pragma once
#include "GLPlot.h"
#include <PostLib/FEState.h>
namespace Post {

//-----------------------------------------------------------------------------
// Line rendering of imported line data
class CGLLinePlot : public CGLPlot
{
	enum { DATA_FIELD, COLOR_MODE, SOLID_COLOR, COLOR_MAP, RENDER_MODE, LINE_WIDTH, RANGE_MODE, SHOW_ALWAYS };

	enum COLOR_MODE {
		COLOR_SOLID,
		COLOR_SEGMENT,
		COLOR_LINE_DATA,
		COLOR_MODEL_DATA
	};

public:
	CGLLinePlot(CGLModel* po);
	virtual ~CGLLinePlot();

	void Render(CGLContext& rc) override;

	float GetLineWidth() { return m_line; }
	void SetLineWidth(float f) { m_line = f; }

	GLColor GetSolidColor() { return m_col; }
	void SetSolidColor(GLColor c) { m_col = c; }

	int GetRenderMode() { return m_nmode; }
	void SetRenderMode(int m) { m_nmode = m; }

	int GetColorMode() { return m_ncolor; }
	void SetColorMode(int m);

	int GetDataField() { return m_nfield; }
	void SetDataField(int n);

	CColorTexture* GetColorMap() { return &m_Col; }
	void UpdateTexture() override { m_Col.UpdateTexture(); }

	void Update(int ntime, float dt, bool breset) override;

	bool UpdateData(bool bsave = true) override;

protected:
	void RenderLines(FEState& s);
	void Render3DLines(FEState& s);
	void Render3DSmoothLines(FEState& s);
	bool ShowLine(LINEDATA& l, FEState& s);

private:
	float		m_line;		//!< line thickness
	GLColor		m_col;		//!< rendering color
	int			m_nmode;	//!< rendering mode
	int			m_ncolor;	//!< color option
	int			m_nfield;
	bool		m_show;		//!< hide when containing elements are hidden
	int			m_rangeMode;
	CColorTexture	m_Col;	//!< line color (when m_ncolor is not solid)

private:
	vec2f	m_rng;
};

//-----------------------------------------------------------------------------
// point cloud rendering of imported point data
class CGLPointPlot : public CGLPlot
{
	enum { POINT_SIZE, COLOR, RENDER_MODE };

public:
	CGLPointPlot(CGLModel* po);
	virtual ~CGLPointPlot();

	void SetPointData(int pointData) { m_data = pointData; }

	void Render(CGLContext& rc) override;

	float GetPointSize() { return m_size; }
	void SetPointSize(float f) { m_size = f; }

	GLColor GetPointColor() { return m_col; }
	void SetPointColor(GLColor c) { m_col = c; }

	int GetRenderMode() { return m_nmode; }
	void SetRenderMode(int m) { m_nmode = m; }

	bool UpdateData(bool bsave = true) override;

private:
	int		m_data;

	float		m_size;		//!< point size
	GLColor		m_col;		//!< rendering color
	int			m_nmode;	//!< rendering mode
};
}
