#include"cont_bancar.h"
#include"Repo.h"
#include"Service.h"
#include<cassert>
#include<iostream>
#include "teste.h"
#include"Tonomat.h"
#include"RepoTonomat.h"
using namespace std;
void teste_Entitate()
{
	char* tip = new char[10];
	strcpy(tip, "in");
	char*des = new char[10];
	strcpy(des, "mancare");


	cont_bancar m(1, 10, tip, des);
	cont_bancar c(1, 10, tip, des);

	assert(c.getZiua() == 1);
	assert(strcmp(c.getDescriere(), des) == 0);
	assert(strcmp(c.getTip(), tip) == 0);
	assert(c.getSuma() == 10);
	
	cout << "teste Entitate trecute cu succes "<<endl;
}
void teste_Repo()
{
	char* tip = new char[10];
	strcpy(tip, "in");
	char*des = new char[10];
	strcpy(des, "mancare");

	cont_bancar m(1, 10, tip, des);
	cont_bancar c(10, 100, tip, des);

	Repo r;
	r.add(m);
	r.add(c);

	assert(r.get_size() == 2);
	assert(r.show()[0].getSuma() == 10);
	assert(r.show()[0].getZiua() == 1);
	assert(r.show()[1].getZiua() == 10);
	assert(r.show()[1].getSuma() == 100);
	assert(strcmp(r.show()[0].getTip(), tip)==0);

	cout << "teste Repo trecute cu  succes \n";
}
void teste_Service()
{
	Service s;

	char* tip = new char[10];
	strcpy(tip, "in");
	char*des = new char[10];
	strcpy(des, "mancare");
	cont_bancar m(1, 10, tip, des);
	cont_bancar c(10, 100, tip, des);

	s.addCont_bancar(m);
	s.addCont_bancar(c);
	
	strcpy(des, "curent");
	s.updateCont_bancar(10, 1000, tip, des);
	
	cont_bancar o(11, 1500, tip, des);
	s.addCont_bancar(o);
	s.deleteCont_bancar(1);


	assert(strcmp(s.get_All().show()[1].getDescriere(), des) == 0);
	assert(s.getSize() == 2);
	assert(s.getSize() == 2);
	assert(s.get_All().show()[1].getZiua() == 11);

	cout << "teste Service trecute cu succes" << endl;
}
void teste_Tonomat() 
{
	Tonomat t(1, "coca", 10);
	assert(t.getNume() == "coca"&&t.getPret() == 10 && t.getCod() == 1);
	t.setCod(14);
	t.setPret(100);
	t.setNmme("coca-cola");
	assert(t.getNume() == "coca-cola"&&t.getPret() == 100 && t.getCod() == 14);
	
}
void test_RepoT()
{
	Tonomat t(1, "coca", 10);
	RepoTonomat r;
	r.addElem(t);
	assert(r.getAll()[0].getCod() == 1 && r.getAll()[0].getNume() == "coca"&&r.getAll()[0].getPret() == 10);
	
}
