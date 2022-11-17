#include "Bankrekening.h"

class Product //hier maak ik mijn product aan
{
public:
	double amount;
	string date;

	Product(double newAmount, string newDate) 
	{
		amount = newAmount;
		date = newDate;
	}
	bool operator ==(const Product& piece) const //vertel ik aan het systeem dat mijn product constant zal zijn en niet veranderd
	{
		return this->date == piece.date;
	}
};

ostream& operator <<(ostream& COUT, Product& productPiece) //zorgt ervoor dat de uiteindelijk variables kan printen met cout
{
	COUT << "Price: " << productPiece.amount << endl;
	COUT << "Date: " << productPiece.date << endl;
	return COUT;
}

class MyCollection //zorgt ervoor dat ik mijn productstukken bij elkaar kan optellen 
{
public:
	list<Product>myPieces;

	void operator+=(Product& piece) 
	{
		this->myPieces.push_back(piece);
	}
	void operator-=(Product& piece)
	{
		this->myPieces.remove(piece);
	}
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection) //maakt een lijst met alle product pieces
{
	for (Product productPiece : myCollection.myPieces)
		COUT << productPiece << endl;
	return COUT;
}

int main()
{
	Bankrekening account(500); //account object heeft 500 saldo
	account.GetInfo(); //print het hoeveel saldo

	Product piece1 = Product(9.99, "1998-06-09");
	Product piece2 = Product(10.99, "2003-10-11");
	Product piece3 = Product(19.99, "1997-07-03");
	MyCollection myCollection;
	myCollection += piece1;
	myCollection += piece2;
	myCollection -= piece2;
	myCollection += piece3;
	cout << myCollection; //print alle producten

	system("pause>0");
}