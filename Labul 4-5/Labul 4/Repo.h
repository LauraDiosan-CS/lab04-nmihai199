#pragma once
#include"cont_bancar.h"
#include<vector>
class Repo
{
private:
	int nr;
	cont_bancar cont[100];
public:
	Repo();
	~Repo();
	int getZi(int zi);
	void add(cont_bancar c);
	cont_bancar * show();
	int get_size();	
	Repo deleteCont(int zi);
	Repo deleteTip(char* tip);

	Repo updateCont(int ziua, int suma, char* tip, char* descriere);
};

