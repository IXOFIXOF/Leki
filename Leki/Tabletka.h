#pragma once
#include "Lek.h"
class CTabletka : public CLek
{
public:
	CTabletka();
	virtual ~CTabletka();
	void UstalDaneSpecyficzne() override;
	CTabletka* Clone() override;
protected:
	void print(ostream& sru) override;
	string m_CzyTrzebaPopic;
};

