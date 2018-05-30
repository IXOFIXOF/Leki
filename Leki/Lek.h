#pragma once
class CLek
{
public:
	CLek();

	virtual CLek* Clone() = 0;
	virtual void UstalDaneSpecyficzne() = 0;
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

