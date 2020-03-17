#pragma once
#include<cstring>

class cont_bancar
{
private:
	int ziua;
	//int suma;
	//char* tip;
	//char* descriere;
public:
	cont_bancar();
	~cont_bancar();
	cont_bancar(int zi);
//	cont_bancar(int zi, int su, char* ti, char* desc);
	cont_bancar(cont_bancar &c);
	int getZiua();
	void setZiua(int zi);
};

