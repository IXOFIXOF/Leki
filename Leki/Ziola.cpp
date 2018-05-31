#include "stdafx.h"
#include "Ziola.h"


CZiola::CZiola()
{
}
CZiola* CZiola::Clone()
{
	return new CZiola(*this);
}
void CZiola::UstalDaneSpecyficzne()
{

}
void CZiola::print(ostream& sru)
{
	sru << "Jestem ziolem, nazywam sie: " << m_Nazwa << " i kosztuje " << m_Cena;
}


CZiola::~CZiola()
{
}
