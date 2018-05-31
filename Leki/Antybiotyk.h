#pragma once
#include "Lek.h"
class CAntybiotyk : public CLek
{
public:
	CAntybiotyk();
	virtual ~CAntybiotyk();
	void UstalDaneSpecyficzne() override;
	CAntybiotyk* Clone() override;
protected:
	void print(ostream& sru);
	string m_SkutkiUbczone;

};

