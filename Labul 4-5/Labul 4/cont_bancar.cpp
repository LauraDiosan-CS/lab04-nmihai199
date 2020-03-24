#include "cont_bancar.h"



cont_bancar::cont_bancar()
{
	tip = new char[1];
	ziua = 0;
	suma = 0;
	descriere = new char[1];
	
}


cont_bancar::~cont_bancar()
{

}



int cont_bancar::getZiua()
{
	return this->ziua;
}

int cont_bancar::getSuma()
{
	return this->suma;
}

char * cont_bancar::getTip()
{
	return this->tip;
}

char * cont_bancar::getDescriere()
{
	return this->descriere;
}

void cont_bancar::setSuma(int s)
{
	this->suma = s;
}

void cont_bancar::setZiua(int zi)
{
	this->ziua = zi;
}

void cont_bancar::setTip(char * t)
{
	if (this->tip != nullptr)
	{
		delete[] this->tip;
		this->tip = nullptr;
			
	}
	this->tip = new char[strlen(t) + 1];
	strcpy(this->tip, t);
}

void cont_bancar::setDescriere(char * des)
{

	if (this->descriere != nullptr)
	{
		delete[] this->descriere;
		this->descriere = nullptr;

	}
	this->descriere = new char[strlen(des) + 1];
	strcpy(this->descriere, des);
}

cont_bancar & cont_bancar::operator=(const cont_bancar & cont)
{
	this->setDescriere(cont.descriere);
	this->setSuma(cont.suma);
	this->setTip(cont.tip);
	this->setZiua(cont.ziua);
	return *this;
}

bool cont_bancar::operator==(const cont_bancar & cont)
{
	return (this->ziua==cont.ziua)&&(this->suma==cont.suma)&&(strcmp(this->tip,cont.tip))&&(strcmp(this->descriere,cont.descriere));
}


cont_bancar::cont_bancar(int zi, int su, char* ti, char* desc)
{
	this->ziua = zi;
	this->suma = su;
	this->tip = new char[strlen(ti) + 1];
	this->descriere = new char[strlen(desc) + 1];
	strcpy(this->tip,  ti);
	strcpy(this->descriere, desc);

}


cont_bancar::cont_bancar(cont_bancar & c)
{
	this->suma = c.suma;
	this->ziua = c.ziua;
	this->descriere = new char[strlen(c.descriere) + 1];
	this->tip = new char[strlen(c.tip) + 1];
	strcpy(this->descriere, c.descriere);
	strcpy(this->tip, c.tip);
}




