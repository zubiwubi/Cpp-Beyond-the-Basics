#include "Transactie.h"

Transactie::Transactie(double aantal, string data)
{
	hoeveelheid = aantal;
	datum = data;
}

bool Transactie::operator ==(const Transactie& piece) const //Hier vertel ik aan het systeem dat mijn product constant zal zijn en niet veranderd
{
	return this->datum == piece.datum;
}