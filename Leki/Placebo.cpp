#include "stdafx.h"
#include "Placebo.h"


CPlacebo::CPlacebo()
{
}
void CPlacebo::print(ostream& sru)
{
	sru << "Jestem : " << m_Nazwa << ". Leczy sie ze mnie ok. "<<m_CzasLeczenia;
}
void CPlacebo::UstalDaneSpecyficzne()
{

}
CPlacebo* CPlacebo::Clone()
{
	return new CPlacebo(*this);
}

CPlacebo::~CPlacebo()
{
}
