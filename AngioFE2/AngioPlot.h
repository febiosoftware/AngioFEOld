#pragma once
#include <FECore/FEPlotData.h>

//-----------------------------------------------------------------------------
class FEPlotAngioStress : public FEDomainData
{
public:
	FEPlotAngioStress(FEModel* pfem) : FEDomainData(PLT_MAT3FS, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotMatrixStress : public FEDomainData
{
public:
	FEPlotMatrixStress(FEModel* pfem) : FEDomainData(PLT_MAT3FS, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotMatrixViscoStress : public FEDomainData
{
public:
	FEPlotMatrixViscoStress(FEModel* pfem) : FEDomainData(PLT_MAT3FS, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};


//-----------------------------------------------------------------------------
class FEPlotMatrixElasticStress : public FEDomainData
{
public:
	FEPlotMatrixElasticStress(FEModel* pfem) : FEDomainData(PLT_MAT3FS, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotMatrixElastic_m_Q : public FEDomainData
{
public:
	FEPlotMatrixElastic_m_Q(FEModel* pfem) : FEDomainData(PLT_MAT3F, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotMatrixElastic_m_Q_fiber : public FEDomainData
{
public:
	FEPlotMatrixElastic_m_Q_fiber(FEModel* pfem) : FEDomainData(PLT_VEC3F, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotMatrixElastic_m_Q_minoraxis1 : public FEDomainData
{
public:
	FEPlotMatrixElastic_m_Q_minoraxis1(FEModel* pfem) : FEDomainData(PLT_VEC3F, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotMatrixElastic_m_Q_minoraxis2 : public FEDomainData
{
public:
	FEPlotMatrixElastic_m_Q_minoraxis2(FEModel* pfem) : FEDomainData(PLT_VEC3F, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotVesselStress : public FEDomainData
{
public:
	FEPlotVesselStress(FEModel* pfem) : FEDomainData(PLT_MAT3FS, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotVesselWeight : public FEDomainData
{
public:
	FEPlotVesselWeight(FEModel* pfem) : FEDomainData(PLT_FLOAT, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};
//-----------------------------------------------------------------------------
class FEPlotMatrixWeight : public FEDomainData
{
public:
	FEPlotMatrixWeight(FEModel* pfem) : FEDomainData(PLT_FLOAT, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};
//-----------------------------------------------------------------------------
class FEPlotMatrixTangent : public FEDomainData
{
public:
	FEPlotMatrixTangent(FEModel* pfem) : FEDomainData(PLT_TENS4FS, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotAngioGradientCenter : public FEDomainData
{
public:
	FEPlotAngioGradientCenter(FEModel* pfem);
	bool Save(FEDomain& d, FEDataStream& str) override;
};

//-----------------------------------------------------------------------------
class FEPlotAngioMaterialHop : public FEDomainData
{
public:
	FEPlotAngioMaterialHop(FEModel* pfem);
	bool Save(FEDomain& d, FEDataStream& str) override;
};


//-----------------------------------------------------------------------------
class FEPlotAngioSegmentBadGrowth : public FEDomainData
{
public:
	FEPlotAngioSegmentBadGrowth(FEModel* pfem);
	bool Save(FEDomain& d, FEDataStream& str) override;
};
//-----------------------------------------------------------------------------
class FEPlotAngioEffectiveStress : public FEDomainData
{
public:
	FEPlotAngioEffectiveStress(FEModel* pfem) : FEDomainData(PLT_MAT3FS, FMT_ITEM){}
	bool Save(FEDomain& d, FEDataStream& str)  override;
};

//-----------------------------------------------------------------------------
class FEPlotAngioCollagenFibersNodes : public FENodeData
{
public:
	FEPlotAngioCollagenFibersNodes(FEModel* pfem) : FENodeData(PLT_VEC3F, FMT_ITEM){}
	bool Save(FEMesh& m, FEDataStream& a)  override;
};

class FEPlotAngioGradient : public FENodeData
{
public:
	FEPlotAngioGradient(FEModel * pfem) : FENodeData(PLT_VEC3F, FMT_ITEM){}
	bool Save(FEMesh & m, FEDataStream & a) override;
};

//-----------------------------------------------------------------------------
class FEPlotAngioECMDensity : public FENodeData
{
public:
	FEPlotAngioECMDensity(FEModel* pfem) : FENodeData(PLT_FLOAT, FMT_ITEM){}
	bool Save(FEMesh& m, FEDataStream& a)  override;
};

//-----------------------------------------------------------------------------
class FEPlotAngioECMAlpha : public FENodeData
{
public:
	FEPlotAngioECMAlpha(FEModel* pfem) : FENodeData(PLT_FLOAT, FMT_ITEM){}
	bool Save(FEMesh& m, FEDataStream& a)  override;
};