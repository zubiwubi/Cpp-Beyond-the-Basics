//Definitie van de Bankrekening
#include "Bankrekening.h"

Bankrekening::Bankrekening(double nieuwSaldo) //definitie van constructor Bankrekening
{
	saldo = nieuwSaldo;
}

void Bankrekening::GetInfo() //definitie van GetInfo, print de saldo hoeveelheid
{
	cout << "Saldo: " << saldo << endl;
}