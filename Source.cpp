#include"ElektronskaPoruka.h"
#include"ElektronskaPorukaSaTekstom.h"

int main() {

	Korisnik k1("Neko", "neko@email.com");
	Korisnik k2("Drugi", "drugineko@eemmaaiill.rs");

	//ElektronskaPoruka ep;
	ElektronskaPoruka e1(k1, k2, "PRva Poruka!");
	
	cout << e1;
	
	ElektronskaPorukaSaTekstom ept(e1);
	ept.PostaviTekstPoruke(ept);
	ept.Posalji(ept.dohvatiElPo(ept));
	//e1.Posalji(ept.)
	cout << endl;
	cout << ept << endl;;
	//ept.PostaviTekstPoruke(ept);
	//cout << endl;
	//cout << ept;


	return 0;
}