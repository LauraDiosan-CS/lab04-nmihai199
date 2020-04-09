#pragma once
#include"Service.h"
class UI
{
private:
	Service s;
public:
	void run();
	void comanda();
	void adauga(char* s);
	void insereaza(char* cuv);
	void stergere(char *cuv);
	void inlocuire(char *v);
	void listeaza(char *cuv);
	void sum(char *cuv);
	void max(char * cuv);
};

