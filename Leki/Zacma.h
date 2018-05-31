#pragma once
#include "Choroba.h"
class CZacma : public CChoroba
{
public:
	CZacma();
	virtual ~CZacma();
	void UstalDaneSpecyficzne() override;
	CZacma* Clone() override;
protected:
	void print(ostream& sru) override;
	int m_ProcentPopulacji;
};

