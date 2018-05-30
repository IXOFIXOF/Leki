#pragma once
#include "Choroba.h"
class CAlergia : public CChoroba
{
public:
	CAlergia();
	virtual ~CAlergia();
	void UstalDaneSpecyficzne() override;
	CAlergia* Clone() override;
protected:
	void print(ostream& sru) override;
	string m_NaCoUczulam;
};

