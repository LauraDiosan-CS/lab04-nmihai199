#include "UI.h"
#include<iostream>
#include<string>
#include <ctime>
#include"cont_bancar.h"
using namespace std;




void UI::run()
{
	this->comanda();
}

void UI::comanda() 
{
	
	string optiune;
	bool exec= true;
	
	while (exec == true)
	{
		cout << "insereaza optiunea  :";
		char str[100];
		
		cin.getline(str, 100);
		char * cuv;
		cuv = strtok(str, " ");
		optiune = cuv;
	
			
		
		if (optiune == "adauga" ||optiune=="add")
		{
			this->adauga(cuv);
			
			
		}
		else if (optiune == "insereaza"|| optiune =="insert")
		{
			this->insereaza(cuv);
		
		}
		else if (optiune == "eliminare" || optiune == " stergere" || optiune == "elim" || optiune == "delete"||optiune=="del")
		{
			this->stergere(cuv);
		}
		else if (optiune == "inlocuire")
		{
			
			this->inlocuire(cuv);

		}
		else if (optiune == "listeaza"||optiune=="list")
		{
			this->listeaza(cuv);

		}
		else if (optiune == "sum")
		{
			this->sum(cuv);
		}
		else if (optiune == "max")
		{
			this->max(cuv);
		}
		else if (optiune == "filtru")
		{

		}
		else if (optiune == "exit")
		{
			exec = false;
		}
		else {
			cout << "optiune incorecta"<<endl;
		}
	}
	cout << endl << " PROGRAM TERMINAT!!!" << endl;
		
}

void UI::adauga(char * cuv)
{
	
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cuv = strtok(NULL, " ");
	string st = cuv;
	int sum = stoi(st);
	cuv = strtok(NULL, " ");
	char* tip = new char[10];
	strcpy(tip, cuv);
	char* detali = new char[10];
	cuv = strtok(NULL, " ");
	strcpy(detali, cuv);
	int day = ltm->tm_mday;
	cont_bancar c(day, sum, tip, detali);
	this->s.addCont_bancar(c);
}

void UI::insereaza(char * cuv)
{
	cuv = strtok(NULL, " ");
	string st = cuv;
	int day = stoi(st);
	cuv = strtok(NULL, " ");
	int sum = stoi(cuv);
	cuv = strtok(NULL, " ");
	char* tip = new char[10];
	strcpy(tip, cuv);
	char* detali = new char[10];
	cuv = strtok(NULL, " ");
	strcpy(detali, cuv);

	cont_bancar c(day, sum, tip, detali);
	this->s.addCont_bancar(c);
}

void UI::stergere(char * cuv)
{
	cuv = strtok(NULL, " ");
	string st = cuv;
	int day = stoi(st);
	cuv = strtok(NULL, " ");
	if (cuv == 0)
	{
		this->s.deleteCont_bancar(day);
	}
	else if (strcmp(cuv, "la"))
	{ 
		cuv = strtok(NULL, " ");
		string st = cuv;
		int day2 = stoi(st);
		for (int i = day; i <= day2; i++)
		{
			this->s.deleteCont_bancar(day);
		}
	}
	else if (strcmp(cuv, "in") || strcmp(cuv, "out"))
	{
		this->s.deleteCont_bancare(cuv);
	}
}

void UI::inlocuire(char * cuv)
{
	cuv = strtok(NULL, " ");
	string st = cuv;
	int day = stoi(st);
	cuv = strtok(NULL, " ");
	char* tip = new char[10];
	strcpy(tip, cuv);
	cuv = strtok(NULL, " ");
	char* detali = new char[10];
	strcpy(detali, cuv);
	cuv = strtok(NULL, " ");//pt " cu "
	cuv = strtok(NULL, " ");
	st = cuv;
	int suma = stoi(st);
	for (int i = 0; i < s.getSize(); i++)
	{
		if (s.get_All().show()[i].getZiua() == day)
		{
			cout << " tip  " << s.get_All().show()[i].getTip() << endl;
			cout << " desc  " << s.get_All().show()[i].getDescriere() << endl;
			if (strcmp(s.get_All().show()[i].getTip(), tip) == 0)
			{
				if (strcmp(s.get_All().show()[i].getDescriere(), detali) == 0)
				{
					s.get_All().show()[i].setSuma(suma);
				}
			}
		}
	}
}

void UI::listeaza(char * cuv)
{
	cuv = strtok(NULL, " ");
	if (cuv == 0)
	{
		for (int i = 0; i < s.getSize(); i++)
		{
			cout << s.get_All().show()[i].getZiua() << " " << s.get_All().show()[i].getSuma() << " " << s.get_All().show()[i].getTip() << " " << s.get_All().show()[i].getDescriere() << endl;
		}
	}
	else if ((strcmp(cuv, "in") == 0) || (strcmp(cuv, "out") == 0))
	{
		for (int i = 0; i < s.getSize(); i++)
		{
			if (strcmp(s.get_All().show()[i].getTip(), cuv) == 0)
				cout << s.get_All().show()[i].getZiua() << " " << s.get_All().show()[i].getSuma() << " " << s.get_All().show()[i].getTip() << " " << s.get_All().show()[i].getDescriere() << endl;
		}
	}
	else  if ((strcmp(cuv, "<") == 0) || (strcmp(cuv, ">") == 0) || (strcmp(cuv, "=") == 0))
	{

		char* semn = new char[10];
		strcpy(semn, cuv);
		cuv = strtok(NULL, " ");
		string st = cuv;
		int sum = stoi(st);

		for (int i = 0; i < s.getSize(); i++)
		{
			if (strcmp(semn, "<") == 0 && (s.get_All().show()[i].getSuma() < sum))
			{
				cout << s.get_All().show()[i].getZiua() << " " << s.get_All().show()[i].getSuma() << " " << s.get_All().show()[i].getTip() << " " << s.get_All().show()[i].getDescriere() << endl;

			}
			else if (strcmp(semn, "=") == 0 && (s.get_All().show()[i].getSuma() == sum))
			{
				cout << s.get_All().show()[i].getZiua() << " " << s.get_All().show()[i].getSuma() << " " << s.get_All().show()[i].getTip() << " " << s.get_All().show()[i].getDescriere() << endl;


			}
			else if (strcmp(semn, ">") == 0 && (s.get_All().show()[i].getSuma() > sum))
			{
				cout << s.get_All().show()[i].getZiua() << " " << s.get_All().show()[i].getSuma() << " " << s.get_All().show()[i].getTip() << " " << s.get_All().show()[i].getDescriere() << endl;


			}

		}
	}
}

void UI::sum(char * cuv)
{
	int sum = 0;
	cuv = strtok(NULL, " ");

	for (int i = 0; i < s.getSize(); i++)
	{
		if (strcmp(s.get_All().show()[i].getTip(), cuv) == 0)
			sum += s.get_All().show()[i].getSuma();
	}
	cout << sum << endl;
}

void UI::max(char * cuv)
{
	cuv = strtok(NULL, " ");
	char* tip = new char[10];
	cuv = strtok(NULL, " ");
	int day = stoi(cuv);
	int max = -1;
	for (int i = 0; i < s.getSize(); i++)
	{
		if (strcmp(s.get_All().show()[i].getTip(), cuv) == 0)
			if ((s.get_All().show()[i].getZiua() == day))
			{
				if (max < s.get_All().show()[i].getSuma())
				{
					max = s.get_All().show()[i].getSuma();
				}
			}
	}
	cout << "max : " << max;
}
