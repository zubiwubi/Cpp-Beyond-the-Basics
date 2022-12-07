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

void Bankrekening::operator+=(Transactie& piece) //telt erbij
{
	this->myPieces.push_back(piece);
	saldo = saldo + piece.hoeveelheid;
}
void Bankrekening::operator-=(Transactie& piece) //telt eraf
{
	Transactie tempTranactie = Transactie(-piece.hoeveelheid, piece.datum);
	this->myPieces.push_back(tempTranactie);
	saldo = saldo - piece.hoeveelheid;
}