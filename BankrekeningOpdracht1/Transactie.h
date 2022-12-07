//Transactie Class, met de hoeveelheid en datum van een product
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Transactie
{
public:
	double hoeveelheid; //Prijs 
	string datum; //Datum van het product

	//Constructor van de Transactie class
	Transactie(double newHoeveelheid, string nieuwDatum);
	bool operator ==(const Transactie& piece) const; //Hier vertel ik aan het systeem dat mijn product constant zal zijn en niet veranderd
};