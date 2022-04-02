#pragma once
#include<iostream>
#include<vector>
#include"ElektronskaPoruka.h"
#include<string.h>
using namespace std;
#pragma once
#ifndef _ELEKTRONSKAPORUKASATEKSTOM_H_
#define _ELEKTRONSKAPORUKASATEKSTOM_H_

class ElektronskaPorukaSaTekstom:public ElektronskaPoruka {

	//vector<Korisnik> posiljaoc;
	//vector<Korisnik> primaoc;
	string poruka="";
	//string stanje;
	//string naslov = "";
	ElektronskaPoruka ep;


public:
	ElektronskaPorukaSaTekstom(ElektronskaPoruka& e);
	void PostaviTekstPoruke(ElektronskaPorukaSaTekstom& e);
	//void PosaljiPor(ElektronskaPorukaSaTekstom& e);
	ElektronskaPoruka& dohvatiElPo(ElektronskaPorukaSaTekstom& e) { return e.ep; };
	friend ostream& operator<<(ostream& it, ElektronskaPorukaSaTekstom& e);
	~ElektronskaPorukaSaTekstom() { ep.~ElektronskaPoruka(); }
};
#endif // !_ELEKTRONSKAPORUKASATEKSTOM_H_