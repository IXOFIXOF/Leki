#pragma once
#include <vector>
#include "Lek.h"
class CChoroba
{
public:
	CChoroba();
	virtual CChoroba* Clone();
	virtual void UstalDaneSpecyficzne();
	void UstalNazweChoroby();
	void UstalCzasLeczenia();
	int PobierzCzasLeczenia();
	string PobierzNazweChoroby();
	void WyswietlLeki();
	void DodajLekDoChoroby(CLek* lek);
	void UsunLekZChoroby(CLek* lek);
	CLek* PobierzElement(int n);
	virtual ~CChoroba();
	friend ostream & operator<<(ostream& sru, CChoroba* choroba);
	friend CChoroba* operator+(CChoroba& choroba, CLek* lek);
	friend CChoroba* operator-(CChoroba& choroba, CLek* lek);
protected:
	vector < CLek* > m_LekiNaChorobe;
	virtual void print(ostream& str);
	string m_Nazwa;
	int m_CzasLeczenia;
};

