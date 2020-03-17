#include"cont_bancar.h"
#include"Repo.h"
#include<cassert>
#include<iostream>
using namespace std;
void teste_Entitate()
{
	cont_bancar c;
	c.setZiua(10);
	assert(c.getZiua() == 10);
	cont_bancar m(10);
	assert(m.getZiua() == 10);
	cout << "teste Entitate trecute cu succes "<<endl;

	
}
void teste_Repo()
{
	cont_bancar c;
	c.setZiua(10);
	cont_bancar c2;
	c2.setZiua(11);
	Repo r;
	r.add(c);
	r.add(c2);
	assert(r.get_size() == 2);
	assert(r.show()[0].getZiua() == 10);
	assert(r.show()[1].getZiua() == 11);

	cout << "teste Repo trecute cu  succes";
}