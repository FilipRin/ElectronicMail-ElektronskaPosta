#include"ElektronskaPoruka.h"
//#include<string.h>
//#include<iostream>
//using namespace std;
ElektronskaPoruka::ElektronskaPoruka(Korisnik& pos, Korisnik& prim, string nas)
{
	//char* x;
	stanje = "U_PRIPREMI";
	naslov.append(nas);
	posiljaoc.push_back(pos);

	primaoc.push_back(prim);

	/*for (int i = 0; nas[i] != '\0'; i++)
	{
		naslov.push_back(nas[i]);
	}*/
}

ElektronskaPoruka::ElektronskaPoruka(const ElektronskaPoruka& e1)
{
	naslov = naslov+e1.naslov;
	stanje = e1.stanje;
	for (int i = 0; i < e1.primaoc.size(); i++) {
		primaoc.push_back(e1.primaoc[i]);
	}
	for (int i = 0; i < e1.posiljaoc.size(); i++) {
		posiljaoc.push_back(e1.posiljaoc[i]);
	}
	
}

void ElektronskaPoruka::Posalji(ElektronskaPoruka& e)
{
	e.stanje = "POSLATA";
}

ostream& operator<<(ostream& it, ElektronskaPoruka& e)
{
	cout << e.naslov<<endl;
	for (int i = 0; i < e.posiljaoc.size(); i++) {
		cout << e.posiljaoc[i];
	}
	cout << endl;
	for (int  j= 0; j < e.primaoc.size(); j++) {
		cout << e.primaoc[j];
	}
	//cout << endl;
	// TODO: insert return statement here
	return it;
}
