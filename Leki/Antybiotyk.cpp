#include "stdafx.h"
#include "Antybiotyk.h"


CAntybiotyk::CAntybiotyk()
{
}
void CAntybiotyk::print(ostream& sru)
{
	sru << "Jestem antybiotykiem: " << m_Nazwa << " i kosztuje " << m_Cena << "\n"
		<< "Skutki uboczne po spozyciu: " << m_SkutkiUbczone;
}
void CAntybiotyk::UstalDaneSpecyficzne()
{
	cout << "Podaj skutki uboczne: ";
	cin.ignore();
	getline( cin,m_SkutkiUbczone);
}
CAntybiotyk* CAntybiotyk::Clone()
{
	return new CAntybiotyk(*this);
}

CAntybiotyk::~CAntybiotyk()
{
}
