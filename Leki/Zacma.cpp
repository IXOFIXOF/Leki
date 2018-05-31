#include "stdafx.h"
#include "Zacma.h"


CZacma::CZacma()
{
	m_ProcentPopulacji = -1;
}
void CZacma::print(ostream& sru)
{
	sru << "Jestem choroba ktora atakuje oczy. Nazywam sie: " << m_Nazwa << ". Leczy sie na mnie ok "
		<< m_CzasLeczenia << " lat."<<" Atkuje ok "<<m_ProcentPopulacji<<" % ludzi.";
}
void CZacma::UstalDaneSpecyficzne()
{
	cout << "Jaki procent populacji atakuje " << m_Nazwa << "\n";
	cin >> m_ProcentPopulacji;
}
CZacma* CZacma::Clone()
{
	return new CZacma(*this);
}
CZacma::~CZacma()
{
}
