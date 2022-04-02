#include "Korisnik.h"

ostream& operator<<(ostream& it, Korisnik& k)
{
	cout << "(" << k.ime << ")" << k.email;
	// TODO: insert return statement here
	return it;
}

Korisnik::Korisnik(string n, string e)
{
	ime =ime+ n, 
	email = email+e;
}
