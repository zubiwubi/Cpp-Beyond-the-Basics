/*Bankrekening
Gemaakt door: Zubaydah Koelemeij
Voor C++ beyond the basics
Alles staat in deze file.*/

#include <list>
#include <string>
#include <iostream>
#include "Transactie.h"
#include "Bankrekening.h"
using namespace std;

//Zorgt ervoor dat de uiteindelijk variables kan printen met cout
ostream& operator <<(ostream& COUT, Transactie& productPiece)
{
	COUT << "Prijs: " << productPiece.hoeveelheid << endl;
	COUT << "Datum: " << productPiece.datum << endl;
	return COUT;
}

//Gebruikt operator overloading zodat een lijst met alle producten gemaakt wordt
ostream& operator<<(ostream& COUT, Bankrekening& myCollection)
{
	for (Transactie productPiece : myCollection.myPieces)
		COUT << productPiece << endl;
	return COUT;
}

int main()
{

	Transactie piece1 = Transactie(9.99, "06-09-1998"); //Piece(x) zijn stukken, met een prijs en datum
	Transactie piece2 = Transactie(10.99, "10-11-2003");
	Transactie piece3 = Transactie(19.99, "07-03-1997");

	Bankrekening myCollection = Bankrekening(0); //Zet 0 op het saldo

	myCollection += piece1;
	myCollection += piece2;
	myCollection -= piece2;
	myCollection += piece3;
	cout << myCollection << endl; //Print de productiehistorie

	myCollection.GetInfo(); //Print de saldo 

	system("pause>0");
}