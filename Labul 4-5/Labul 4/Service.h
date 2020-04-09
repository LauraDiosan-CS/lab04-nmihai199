#pragma once
#include"Repo.h"
class Service
{
private:
	Repo repo;		
public:
	Service();
	Service(const Repo&r);
	void setRepo(const Repo&);
	void addCont_bancar(cont_bancar&);
	void deleteCont_bancar(int zi);
	void deleteCont_bancare(char* tip);
	void updateCont_bancar(int ziua, int suma, char* tip, char* descriere);
	int getSize();
	Repo get_All();

	~Service();
};

