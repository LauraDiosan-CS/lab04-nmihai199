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
Repo Repo::deleteCont(int zi)
{
	int poz = -1;
	for (int i = 0; i < this->get_size(); i++)
	{
		if (this->cont[i].getZiua() == zi)
		{
			poz = i;
		}
	}
	for (int i = poz; i < this->get_size() - 1; i++)
	{
		this->cont[i].setDescriere(this->cont[i + 1].getDescriere());
		this->cont[i].setSuma(this->cont[i + 1].getSuma());
		this->cont[i].setTip(this->cont[i + 1].getTip());
		this->cont[i].setZiua(this->cont[i + 1].getZiua());
	}
	this->nr -= 1;
	return* this;
}
Repo Repo::updateCont(int ziua, int suma, char * tip, char * descriere)
{

	for (int i = 0; i < this->get_size(); i++)
	{
		//	std::cout << this->repo.show()->getZiua() << endl;
		if (this->show()[i].getZiua() == ziua)
		{
			this->show()[i].setSuma(suma);
			this->show()[i].setDescriere(descriere);
			this->show()[i].setTip(tip);
		}
	}
	return *this;
}
