#include<iostream>
#include"teste.h"
#include"UI.h"

using namespace std;
void menu()
{
	cout << " pentru adaugare in ziua curenta add suma tip detalii " << endl;
	cout << " pentru inserare ziua suma tip detalii" << endl;
	cout << "pentru eliminare ziua/tip" << endl;
	cout << "pentru inlocuire" << endl;
	cout << "pentru listare list |  tip" << endl;
	cout << "pentru suma produselor sum ziua| tip " << endl;;
	cout << " pentru maxim max " << endl;
	cout << "pentru exit : exit " << endl;
}
int main()
{
	UI u;
	/*teste_Entitate();
	teste_Repo();
	teste_Service();*/
	menu();
	u.run();
	cout << endl;
	system("pause");
	teste_Tonomat();
	test_RepoT();
}