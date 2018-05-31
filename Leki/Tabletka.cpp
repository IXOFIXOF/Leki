#include "stdafx.h"
#include "Tabletka.h"


CTabletka::CTabletka()
{
}
void CTabletka::UstalDaneSpecyficzne()
{
	cout << "Jestem do [popijania] czy do [ssania]?";
	cin.ignore();
	getline( cin, m_CzyTrzebaPopic);
}
CTabletka* CTabletka::Clone()
{
	return new CTabletka(*this);
}
void CTabletka::print(ostream& sru)
{
	sru << "Jestem tabletka " << m_Nazwa << " i kosztuje " << m_Cena<<"\n"<<
		"Dodatkowo jestem do "<<m_CzyTrzebaPopic;
}

CTabletka::~CTabletka()
{
}
