#include "stdafx.h"
#include "Lek.h"


CLek::CLek()
{
	m_Nazwa = "Nie podano nazwy";
	m_Cena = -1;
}
void CLek::UstawNazweLeku()
{
	cout << "Podaj nazwe leku: ";
	cin.clear();
	cin.ignore();
	getline(cin, m_Nazwa);
}
string CLek::PobierzNazweLeku()
{
	return m_Nazwa;
}
void CLek::UstawCene()
{
	cout << "Podaj cene leku: ";
	cin >> m_Cena;
}
int CLek::PobierzCeneLeku()
{
	return m_Cena;
}

ostream & operator<<(ostream & sru, CLek* lek)
{
	lek->print(sru);
	return sru;
}
void CLek::print(ostream& str)
{
	str << "Nie okrelsono operatora << dla tego obiektu\n";
}

CLek::~CLek()
{
}
