#pragma once
#include<cstring>

class cont_bancar
{
private:
	int ziua;
	int suma;
	char* tip;
	char* descriere;
public:
	cont_bancar();
	~cont_bancar();
	cont_bancar(int zi, int su, char* ti, char* desc);
	cont_bancar(cont_bancar &c);
	int getZiua();
	int getSuma();
	char* getTip();
	char* getDescriere();
	void setSuma(int s);
	void setZiua(int zi);
	void setTip(char* t);
	void setDescriere(char* des);
	cont_bancar& operator=(const cont_bancar& cont);
	bool operator==(const cont_bancar& cont);


};

