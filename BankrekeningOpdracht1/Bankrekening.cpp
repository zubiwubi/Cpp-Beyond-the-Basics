//Bankrekening Opdracht 1, gemaakt door Zubaydah Koelemeij 16/11/2022 for C++ Beyond the Basics
#include <iostream>
#include<list>
using namespace std;

class Transactie //weergeeft hoeveel iets kost en de datum wanneer gekocht
{
public:
	double hoeveelheid;
	string datum;

	Transactie(double aantal, string data)
	{
		hoeveelheid = aantal;
		datum = data;
	}
};

class Bankrekening //weergeeft saldo en transactie geschiedenis
{
public:
	double saldo;
	list<Transactie> transactieHistorie;

	Bankrekening(double boni)
	{
		saldo = boni;
	}

	void GetInfo()
	{
		cout << "Saldo: " << saldo << endl;
	}
};

int main() 
{
	Bankrekening account (500);
	account.GetInfo();

	system("pause>0");
}