#include "Service.h"
#include<iostream>
using namespace std;

Service::Service()
{
}

Service::Service(const Repo &r)
{
	this->repo = r;
}

void Service::setRepo(const Repo &r)
{
	this->repo = r;
}

void Service::addCont_bancar(cont_bancar &r)
{
	this->repo.add(r);
}

void Service::deleteCont_bancar(int zi)
{
	this->repo.deleteCont(zi);

}

void Service::deleteCont_bancare(char* tip)
{
	this->repo.deleteTip(tip);
}

void Service::updateCont_bancar(int ziua, int suma, char * tip, char * descriere)
{
	this->repo.updateCont(ziua, suma, tip, descriere);
}

int Service::getSize()
{
	return this->repo.get_size();
}

Repo  Service::get_All()
{
	return this->repo;
}





Service::~Service()
{
}
