#include "cont_bancar.h"



cont_bancar::cont_bancar()
{
	//tip = new char[1];
	ziua = 0;
	//suma = 0;
	//descriere = new char[1];

}


cont_bancar::~cont_bancar()
{
}

cont_bancar::cont_bancar(int zi)
{
	this->ziua = zi;
}

/*
cont_bancar::cont_bancar(int zi, int su, char* ti, char* desc)
{
	this->ziua = zi;
	this->suma = su;
	this->tip = new char[strlen(ti) + 1];
	this->descriere = new char[strlen(desc) + 1];
	strcpy(this->tip,  ti);
	strcpy(this->descriere, desc);

}
*/
/*
cont_bancar::cont_bancar(cont_bancar & c)
{
	this->suma = c.suma;
	this->ziua = c.ziua;
	this->descriere = new char[strlen(c.descriere) + 1];
	this->tip = new char[strlen(c.tip) + 1];
	strcpy(this->descriere, c.descriere);
	strcpy(this->tip, c.tip);
}
*/


cont_bancar::cont_bancar(cont_bancar & c)
{
	this->ziua = c.ziua;
}

int cont_bancar::getZiua()
{
	return this->ziua;
}

void cont_bancar::setZiua(int zi)
{
	this->ziua = zi;
}
