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
#include <vector>
#include <string>
#include <QVariant>

namespace FEBio {

	// NOTE: This is an exact copy of the FEParamType enum in FEBio (defined in FEParam.h)!
	//       Make sure that this remains so! 
	enum FEBIO_PARAM_TYPE {
		FEBIO_PARAM_INVALID,
		FEBIO_PARAM_INT,
		FEBIO_PARAM_BOOL,
		FEBIO_PARAM_DOUBLE,
		FEBIO_PARAM_VEC2D,
		FEBIO_PARAM_VEC3D,
		FEBIO_PARAM_MAT3D,
		FEBIO_PARAM_MAT3DS,
		FEBIO_PARAM_IMAGE_3D,
		FEBIO_PARAM_STRING,
		FEBIO_PARAM_DATA_ARRAY,
		FEBIO_PARAM_TENS3DRS,
		FEBIO_PARAM_STD_STRING,
		FEBIO_PARAM_STD_VECTOR_INT,
		FEBIO_PARAM_STD_VECTOR_DOUBLE,
		FEBIO_PARAM_STD_VECTOR_VEC2D,
		FEBIO_PARAM_STD_VECTOR_STRING,
		FEBIO_PARAM_DOUBLE_MAPPED,
		FEBIO_PARAM_VEC3D_MAPPED,
		FEBIO_PARAM_MAT3D_MAPPED,
		FEBIO_PARAM_MAT3DS_MAPPED,
		FEBIO_PARAM_MATERIALPOINT
	};

	struct FEBioClassInfo
	{
		const char* sztype;
		const char* szmod;
		unsigned int	classId;
	};

	std::vector<FEBioClassInfo> FindAllClasses(int mod, int superId, int baseClassId = -1, bool includeModuleDependencies = true);

	class FEBioParam
	{
	public:
		FEBioParam() { m_enums = nullptr; }
		FEBioParam(const FEBioParam& p)
		{
			m_name = p.m_name;
			m_type = p.m_type;
			m_val  = p.m_val;
			m_enums = p.m_enums;
		}
		void operator = (const FEBioParam& p)
		{
			m_name = p.m_name;
			m_type = p.m_type;
			m_val = p.m_val;
			m_enums = p.m_enums;
		}

		int type() const { return m_type; }
		const std::string& name() const { return m_name; }

	public:
		std::string		m_name;
		int				m_type;
		const char*		m_enums;	// enum values, only for int parameters
		QVariant		m_val;
	};

	class FEBioClass;

	class FEBioProperty
	{
	public:
		FEBioProperty() { m_baseClassId = -1; m_superClassId = -1; }
		FEBioProperty(const FEBioProperty& p)
		{
			m_baseClassId = p.m_baseClassId;
			m_superClassId = p.m_superClassId;
			m_name = p.m_name;
			m_comp = p.m_comp;
		}
		void operator = (const FEBioProperty& p)
		{
			m_baseClassId = p.m_baseClassId;
			m_superClassId = p.m_superClassId;
			m_name = p.m_name;
			m_comp = p.m_comp;
		}

	public:
		int	m_baseClassId;	// Id that identifies the base class of the property (this is an index!)
		int	m_superClassId;	// Id that identifies the super class (this is an enum!)
		std::string	m_name;
		std::vector<FEBioClass>	m_comp;
	};

	class FEBioClass
	{
	public:
		FEBioClass() {}
		FEBioClass(const FEBioClass& c)
		{
			m_typeString = c.m_typeString;
			m_Param = c.m_Param;
			m_Props = c.m_Props;
		}
		void operator = (const FEBioClass& c)
		{
			m_typeString = c.m_typeString;
			m_Param = c.m_Param;
			m_Props = c.m_Props;
		}

	public:
		std::string TypeString() const { return m_typeString; }
		void SetTypeString(const std::string& s) { m_typeString = s; }

		int Parameters() const { return (int)m_Param.size(); }
		FEBioParam& AddParameter(const std::string& paramName, int paramType, const QVariant& val);
		FEBioParam& GetParameter(int i) { return m_Param[i]; }

		int Properties() const { return (int)m_Props.size(); }
		void AddProperty(const std::string& propName, int superClassId, int baseClassId = -1);
		FEBioProperty& GetProperty(int i) { return m_Props[i]; }

	private:
		std::string		m_typeString;
		std::vector<FEBioParam>		m_Param;
		std::vector<FEBioProperty>	m_Props;
	};

	FEBioClass* CreateFEBioClass(int classId);
}
