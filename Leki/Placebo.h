#pragma once
#include "Choroba.h"
class CPlacebo : public CChoroba
{
public:
	CPlacebo();
	virtual ~CPlacebo();
	void UstalDaneSpecyficzne();
	CPlacebo* Clone() override;
protected:
	void print(ostream& sru) override;
};

