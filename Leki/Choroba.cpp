#include "stdafx.h"
#include "Choroba.h"


CChoroba::CChoroba()
{
	m_Nazwa = "Nie podano nazwy\n";
	m_CzasLeczenia = -1;
}
void CChoroba::UstalNazweChoroby()
{
	cout << "Podaj nazwe choroby: ";
	cin.clear();
	cin.ignore();
	getline(cin, m_Nazwa);
}
string CChoroba::PobierzNazweChoroby()
{
	return m_Nazwa;
}
int CChoroba::PobierzCzasLeczenia()
{
	return m_CzasLeczenia;
}
void CChoroba::UstalCzasLeczenia()
{
	cout << "Podaj czas leczenia: ";
	cin >> m_CzasLeczenia;
}
void CChoroba::DodajLekDoChoroby(CLek* lek)
{
	CLek* LekKopia = lek->Clone();
	m_LekiNaChorobe.push_back(LekKopia);
}
void CChoroba::UsunLekZChoroby(CLek* lek)
{
	vector<CLek*> ::iterator it;
	it = find( m_LekiNaChorobe.begin(), m_LekiNaChorobe.end(), lek );
	if (it != m_LekiNaChorobe.end())
	{
		m_LekiNaChorobe.erase(it);
		delete lek;
	}
}
void CChoroba::WyswietlLeki()
{
	vector<CLek*> ::iterator it;
	it = m_LekiNaChorobe.begin();
	int licznik = 1;
	while (it != m_LekiNaChorobe.end())
	{
		cout << licznik << ". " << *it;
		it++;
		licznik++;
	}
}
ostream & operator<<(ostream & sru, CChoroba* choroba)
{
	choroba->print(sru);
	return sru;
}
void CChoroba::print(ostream& str)
{
	str << "Nie okrelsono operatora << dla tego obiektu\n";
}
CChoroba::~CChoroba()
{
}
CChoroba* operator+(CChoroba& choroba, CLek* lek)
{
	choroba.DodajLekDoChoroby(lek);
	return &choroba;
}
CChoroba* operator-(CChoroba& choroba, CLek* lek)
{
	choroba.UsunLekZChoroby(lek);
	return &choroba;
}