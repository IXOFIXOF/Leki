#include "stdafx.h"
#include "Alergia.h"


CAlergia::CAlergia()
{
}
CAlergia* CAlergia::Clone()
{
	return new CAlergia(*this);
}
void CAlergia::print(ostream& sru)
{
	sru <<"Jestem "<<m_Nazwa<<". Uczulam ludzi na: " << m_NaCoUczulam<<". Trzeba sie ze mnie leczyc przez "<<m_CzasLeczenia<<" lat.";
}
void CAlergia::UstalDaneSpecyficzne()
{
	cout << "Na co alergia uczula? ";
	cin >> m_NaCoUczulam;
}
CAlergia::~CAlergia()
{
}
