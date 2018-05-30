#pragma once
#include <vector>
#include "Lek.h"
class CChoroba
{
public:
	CChoroba();
	virtual CChoroba* Clone() = 0;
	virtual void UstalDaneSpecyficzne() = 0;
	void UstalNazweChoroby();
	void UstalCzasLeczenia();
	int PobierzCzasLeczenia();
	string PobierzNazweChoroby();
	void DodajLekDoChoroby(CLek* lek);
	void UsunLekZChoroby(CLek* lek);
	void WyswietlLeki();

	virtual ~CChoroba();
	friend ostream & operator<<(ostream& sru, CChoroba* choroba);
	friend CChoroba* operator+(CChoroba& choroba, CLek* lek);
	friend CChoroba* operator+(CChoroba& choroba, CLek* lek);
protected:
	vector < CLek* > m_LekiNaChorobe;
	virtual void print(ostream& str);
	string m_Nazwa;
	int m_CzasLeczenia;
};

