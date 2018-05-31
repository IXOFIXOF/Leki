#pragma once
#include "Lek.h"
class CZiola : public CLek
{
public:
	CZiola();
	virtual ~CZiola();
	CZiola* Clone() override;
	void UstalDaneSpecyficzne();
protected:
	void print(ostream& sru) override;
	
};

