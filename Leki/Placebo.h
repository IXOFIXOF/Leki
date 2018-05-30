#pragma once
#include "Choroba.h"
class CPlacebo : public CChoroba
{
public:
	CPlacebo();
	virtual ~CPlacebo();
	void UstalDaneSpecyficzne();
protected:
	void print(ostream& sru) override;
};

