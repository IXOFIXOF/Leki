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
void WyswietlLeki(vector<CLek*>& Leki);
void WyswietlChoroby(vector<CChoroba*>& choroby);
void DodajLekDlaChoroby(vector<CChoroba*>& choroby, vector<CLek*>& Leki);
void UsunLekZChoroby(vector<CChoroba*>& choroby);
int main()
{
	int wybor;
	vector<CLek*> Leki;
	vector<CChoroba*> Choroby;
	do
	{
		cout << "1. Dodaj choroba\n2. Dodaj Lek\n3. Dodaj lek dla choroby\n4. Usun lek z choroby\n5. Wyswietl choroby\n6. Wyswietl leki\n";
		
		cin >> wybor;
		switch (wybor)
		{
		case 1:
		{
			Choroby.push_back(DodajChorobe());
			system("cls");
			break;
		}
		case 2:
		{
			Leki.push_back(DodajLek());
			system("cls");
			break;
		}
		case 3:
		{
			DodajLekDlaChoroby(Choroby, Leki);
			break;
		}
		case 4:
		{
			UsunLekZChoroby(Choroby);
			break;
		}
		case 5:
		{
			WyswietlChoroby(Choroby);
			break;
		}
		case 6:
		{
			WyswietlLeki(Leki);
			break;
		}
		}
	} while (wybor != 7);
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
	cout << "1. Jakas choroba\n2. Alergia\n3. Placebo\n4. Zacma\n";
	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1: DoDodania = new CChoroba; break;
	case 2: DoDodania = new CAlergia; break;
	case 3: DoDodania = new CPlacebo; break;
	case 4: DoDodania = new CZacma;   break;
	default:
		break;
	}
	DoDodania->UstalNazweChoroby();
	DoDodania->UstalCzasLeczenia();
	DoDodania->UstalDaneSpecyficzne();
	return DoDodania;
}
CLek* DodajLek()
{
	CLek* DoDodania = nullptr;
	cout << "1. Jakis lek\n2. Antybiotyk\n3. Tabletka\n4. Ziola\n";
	int wybor;
	cin >> wybor;

	switch (wybor)
	{
	case 1: DoDodania = new CLek; break;
	case 2: DoDodania = new CAntybiotyk; break;
	case 3: DoDodania = new CTabletka; break;
	case 4: DoDodania = new CZiola;   break;
	default:
		break;
	}
	DoDodania->UstawNazweLeku();
	DoDodania->UstawCene();
	DoDodania->UstalDaneSpecyficzne();

	return DoDodania;
}
void WyswietlLeki(vector<CLek*>& Leki)
{
	vector <CLek*> ::iterator it;

	it = Leki.begin();
	while (it != Leki.end())
	{
		cout << *it << "\n";
		it++;
	}
}
void WyswietlChoroby(vector<CChoroba*>& choroby)
{
	vector<CChoroba*> ::iterator it;
	it = choroby.begin();
	while (it != choroby.end())
	{
		cout << *it << "\n";
		it++;
	}
}
void DodajLekDlaChoroby(vector<CChoroba*>& choroby, vector<CLek*>& Leki)
{
	int KtoraChoroba = 0;
	int KtoryLek = 0;
	int licznik = 1;
	vector<CChoroba*> ::iterator itChoroby = choroby.begin();
	vector<CLek*> ::iterator itLeki = Leki.begin();

	while (itChoroby != choroby.end())
	{
		cout << licznik << ". " << (*itChoroby)->PobierzNazweChoroby() << "\n";
		licznik++; itChoroby++;
	}
	cin >> KtoraChoroba;
	licznik = 1;
	while (itLeki != Leki.end())
	{
		cout << licznik << ". " << (*itLeki)->PobierzNazweLeku() << "\n";
		licznik++; itLeki++;
	}
	cin >> KtoryLek;
	choroby[KtoraChoroba - 1] = *choroby[KtoraChoroba - 1] + Leki[KtoryLek - 1];
}
void UsunLekZChoroby(vector<CChoroba*>& choroby)
{

	int KtoraChoroba = 0;
	int KtoryLek = 0;
	int licznik = 1;
	vector<CChoroba*> ::iterator itChoroby = choroby.begin();

	while (itChoroby != choroby.end())
	{
		cout << licznik << ". " << (*itChoroby)->PobierzNazweChoroby() << "\n";
		licznik++; itChoroby++;
	}
	cin >> KtoraChoroba;
	licznik = 1;
	choroby[KtoraChoroba - 1]->WyswietlLeki();
	cin >> KtoryLek;
	CLek* DoUsuniecia = choroby[KtoraChoroba - 1]->PobierzElement(KtoryLek - 1);
	choroby[KtoraChoroba - 1] = *choroby[KtoraChoroba - 1] - DoUsuniecia;
}