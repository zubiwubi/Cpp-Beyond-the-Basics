#pragma once
#include "Transactie.h"
#include <list>


//Bankrekening class met saldo en transactiehistorie
class Bankrekening
{
public:
	list<Transactie>myPieces; //Zorgt ervoor dat ik mijn productstukken bij elkaar kan optellen

	double saldo;

	Bankrekening(double nieuwSaldo);

	void GetInfo(); //Functie zodat ik het hoeveelheid saldo kan printen

	void operator+=(Transactie& piece); //telt erbij
	
	void operator-=(Transactie& piece); //telt eraf
};