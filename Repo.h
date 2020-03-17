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
	void add(cont_bancar c);
	cont_bancar * show();
	int get_size();
};

