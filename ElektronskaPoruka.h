#include<iostream>
#include<vector>
#include"Korisnik.h"
//#include"ElektronskaPorukaSaTekstom.h"
using namespace std;
#pragma once
#ifndef _ELEKTRONSKAPOSTA_H_
#define _ELEKTRONSKAPOSTA_H_

class ElektronskaPoruka {
	
	vector<Korisnik> posiljaoc;
	vector < Korisnik> primaoc;
	string stanje;
	string naslov="";
public:
	ElektronskaPoruka() {};
	ElektronskaPoruka(Korisnik& pos, Korisnik& prim, string nas);
	ElektronskaPoruka(const ElektronskaPoruka& e1);
	const string& dohvatiNaslov() const{ return naslov; }
	const string& dohvatiStanje() const {return stanje; }
	//const int& dohvatiSizePos()const { return posiljaoc.size(); }
	//const int& dohvatiSizePrim()const { return primaoc.size(); }
	const Korisnik& dohvatiPos()const { return posiljaoc.front(); };
	const Korisnik& dohvatiPrim()const { return primaoc.front(); };
	friend ostream& operator<<(ostream& it, ElektronskaPoruka& e);
	void Posalji(ElektronskaPoruka& e);
	~ElektronskaPoruka() { posiljaoc.clear(); primaoc.clear(); }
};





#endif // !_ELEKTRONSKAPOSTA_H_