#pragma once
#include"cont_bancar.h"
#include<vector>
class Repo
{
private:
	int nr;
	cont_bancar cont[3];
public:
	Repo();
	~Repo();
	void add(cont_bancar c);
	cont_bancar * show();
	int get_size();
	Repo deleteCont(int zi);
	Repo updateCont(int ziua, int suma, char* tip, char* descriere);
};

