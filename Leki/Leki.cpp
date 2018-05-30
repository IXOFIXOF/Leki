// Leki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Alergia.h"
#include "Antybiotyk.h"
#include "Choroba.h"
#include "Lek.h"
#include "Placebo.h"
#include "Tabletka.h"
#include "Zacma.h"
#include "Ziola.h"

CChoroba* DodajChorobe();
CLek* DodajLek();
void WyswietlLeki(vector<CLek*>Leki);
void WyswietlChoroby(vector<CChoroba*> choroby);
int main()
{
	vector<CLek*> Leki;
	vector<CChoroba*> Choroby;
	cout << "1. Dodaj choroba\n2. Dodaj Lek\n3. Dodaj lek dla choroby\n4. Usun lek z choroby\n5. Wyswietl choroby\n6. Wyswietl leki\n";
	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1: 
	{
		Choroby.push_back(DodajChorobe());
		break;
	}
	case 2:
	{
		Leki.push_back(DodajLek());
		break;
	}
	case 5:
	{
		WyswietlChoroby(Choroby);
		break;
	}
	case 6:
	{
		WyswietlLeki( Leki );
		break;
	}
	}
	std::cout << "Klasy bazowe leki, choroby, klasy pochodne zio³a, " 
		<<"antybiotyki, placebo np. homeopatia, magia, schorzenia uk³adu trawiennego, "
		<<"oczu itd. Przeci¹¿yæ operator strumienia i dodawania i odejmowania leków z "
		<<"leczonych chorób oraz parê operatorów wed³ug w³asnego pomys³u.\n";
	std::cin.get();
    return 0;
}
CChoroba* DodajChorobe()
{
	CChoroba* DoDodania = nullptr;


	return DoDodania;
}
CLek* DodajLek()
{
	CLek* DoDodania = nullptr;


	return DoDodania;
}
void WyswietlLeki(vector<CLek*>Leki)
{
	vector <CLek*> ::iterator it;

	it = Leki.begin();
	while (it != Leki.end())
	{
		cout << *it << "\n";
	}
}
void WyswietlChoroby(vector<CChoroba*> choroby)
{
	vector<CChoroba*> ::iterator it;
	while (it != choroby.end())
	{
		cout << *it << "\n";
	}
}