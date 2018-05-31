#pragma once
class CLek
{
public:
	CLek();

	virtual CLek* Clone();
	virtual void UstalDaneSpecyficzne();
	void UstawNazweLeku();
	void UstawCene();
	int PobierzCeneLeku();
	string PobierzNazweLeku();
	virtual ~CLek();
	friend ostream & operator<<(ostream& sru, CLek* lek);
protected:
	virtual void print(ostream& str);
	string m_Nazwa;
	int m_Cena;
};

