#include<string.h>
#include<iostream>

using namespace std;

#pragma once
#ifndef _KORISNIK_H_
#define _KORISNIK_H_

class Korisnik {
	
	string ime="";
	string email="";
public:
	
	Korisnik(string n, string e);
	const string& DohvatiIme() const { return ime; }
	const string& DohvatiEmail() const { return email; }
	//Korisnik& operator=(const  Korisnik&) = delete;

	friend ostream& operator<<(ostream& it, Korisnik& k);
	~Korisnik(){}
};


#endif // !_KORISNIK_H_