#include "stdafx.h"
#include "Placebo.h"


CPlacebo::CPlacebo()
{
}
void CPlacebo::print(ostream& sru)
{
	sru << "Jestem efektem placebo. Nazwali mnie: " << m_Nazwa << ". Leczy si� ze mnie ok. "<<m_CzasLeczenia;
}
void CPlacebo::UstalDaneSpecyficzne()
{

}

CPlacebo::~CPlacebo()
{
}
