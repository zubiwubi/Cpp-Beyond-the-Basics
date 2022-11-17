//Class van de Banrekening 

#pragma once
#include "Transactie.h"
#include<list>
#include <iostream>

class Bankrekening //definitie: Hierin is de tranasactie geschiedenis te zien en de Saldo
{
public:
	double saldo;
	list<Transactie> transactieHistorie;

	Bankrekening(double nieuwSaldo);

	void GetInfo(); //Print de saldo hoeveelheid
};