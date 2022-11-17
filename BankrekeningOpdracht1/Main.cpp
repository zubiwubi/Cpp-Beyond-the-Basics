/*Bankrekening
Gemaakt door: Zubaydah Koelemeij
Voor C++ beyond the basics
Alles staat in deze file.*/

#include<list>
#include <string>
#include <iostream>
using namespace std;

//Transactie Class, met de hoeveelheid en datum van een product
class deTransactie 
{
public:
	double hoeveelheid; //Prijs 
	string datum; //Datum van het product

	//Constructor van de Transactie class
	deTransactie(double newHoeveelheid, string nieuwDatum) 
	{
		hoeveelheid = newHoeveelheid;
		datum = nieuwDatum;
	}
	bool operator ==(const deTransactie& piece) const //Hier vertel ik aan het systeem dat mijn product constant zal zijn en niet veranderd
	{
		return this->datum == piece.datum;
	}
};

//Zorgt ervoor dat de uiteindelijk variables kan printen met cout
ostream& operator <<(ostream& COUT, deTransactie& productPiece) 
{
	COUT << "Prijs: " << productPiece.hoeveelheid << endl;
	COUT << "Datum: " << productPiece.datum << endl;
	return COUT;
}

//Bankrekening class met saldo en transactiehistorie 
class deBankrekening 
{
public:
	list<deTransactie>myPieces; //Zorgt ervoor dat ik mijn productstukken bij elkaar kan optellen

	double saldo;

	deBankrekening(double nieuwSaldo)
	{
		saldo = nieuwSaldo;
	}

	void GetInfo() //Functie zodat ik het hoeveelheid saldo kan printen
	{
		cout << "Saldo: " << saldo << endl;
	}

	void operator+=(deTransactie& piece) //telt erbij
	{
		this->myPieces.push_back(piece);
		saldo = saldo + piece.hoeveelheid;
	}
	void operator-=(deTransactie& piece) //telt eraf
	{
		deTransactie tempTranactie = deTransactie(-piece.hoeveelheid, piece.datum);
		this->myPieces.push_back(tempTranactie);
		saldo = saldo - piece.hoeveelheid;
	}
};

//Gebruikt operator overloading zodat een lijst met alle producten gemaakt wordt
ostream& operator<<(ostream& COUT, deBankrekening& myCollection) 
{
	for (deTransactie productPiece : myCollection.myPieces)
		COUT << productPiece << endl;
	return COUT;
}

int main()
{

	deTransactie piece1 = deTransactie(9.99, "06-09-1998"); //Piece(x) zijn stukken, met een prijs en datum
	deTransactie piece2 = deTransactie(10.99, "10-11-2003");
	deTransactie piece3 = deTransactie(19.99, "07-03-1997");

	deBankrekening myCollection = deBankrekening(0); //Zet 0 op het saldo

	myCollection += piece1;
	myCollection += piece2;
	myCollection -= piece2;
	myCollection += piece3;
	cout << myCollection; //Print de productiehistorie

	myCollection.GetInfo(); //Print de saldo 

	system("pause>0");
}