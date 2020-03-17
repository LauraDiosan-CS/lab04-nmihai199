#include "Repo.h"



Repo::Repo()
{
	this->nr = 0;
}


Repo::~Repo()
{
}

void Repo::add(cont_bancar c)
{
	this->cont[this->nr++] = c;
}

cont_bancar * Repo::show()
{
	return this->cont;
}

int Repo::get_size()
{
	return this->nr;
}
