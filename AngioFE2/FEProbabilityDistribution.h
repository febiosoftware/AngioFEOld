#pragma once
#include "StdAfx.h"
#include <FECore/FEMaterial.h>
//pure virtual base class for probability distributions
class FEProbabilityDistribution : public FEMaterial
{
public:
	FEProbabilityDistribution(FEModel* pfem) : FEMaterial(pfem) {}

	//generates the next value in the given sequence which fits a given distribution
	virtual double NextValue(angiofe_random_engine & re) = 0;

	
	//when the time changes if the distribution needs modified this is the time to do it
	virtual void StepToTime(double time) = 0;

	
protected:
	int max_retries = 10;
private:
	DECLARE_PARAMETER_LIST();
};

class FENormalDistribution : public FEProbabilityDistribution
{
public:
	FENormalDistribution(FEModel* pfem) : FEProbabilityDistribution(pfem) {}

	//generates the next value in the given sequence which fits a given distribution
	//this value cannot be zero or less if the value is zero or less the result will be redrawn up to max_retries
	//nan will be returned if the distribution fails to find a suitable number
	double NextValue(angiofe_random_engine & re) override;

	bool Init() override;

	void StepToTime(double time) override;

private:
	double mean = 1.0;//distribution's mean
	double stddev = 1.0;//distribution's standard deviation

	std::normal_distribution<double> nd;

	double prev_mean = 1.0;
	double prev_stddev = 1.0;
	

	DECLARE_PARAMETER_LIST();
};