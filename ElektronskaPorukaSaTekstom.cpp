#include"ElektronskaPorukaSaTekstom.h"

ElektronskaPorukaSaTekstom::ElektronskaPorukaSaTekstom(ElektronskaPoruka& e)
{
	//naslov = naslov + e.dohvatiNaslov();
	
	//posiljaoc.push_back(e.dohvatiPos());
	
	//primaoc.push_back(e.dohvatiPrim());

	//stanje = e.dohvatiStanje();
    ep = e;
}

void ElektronskaPorukaSaTekstom::PostaviTekstPoruke(ElektronskaPorukaSaTekstom& e)
{
	char s;
	
	if (e.ep.dohvatiStanje() == "POSLATA") cout << "Greska! Poruka je vec poslata" << endl;
	else {
		cout << "Unesite poruku:" << endl;
		s = getchar();
		while (s != '\n') {
			e.poruka = e.poruka + s;
			s = getchar();
		}
		e.poruka = e.poruka + '\0';
	}
}

/*void ElektronskaPorukaSaTekstom::PosaljiPor(ElektronskaPorukaSaTekstom& e)
{
	e.ep.dohvatiStanje() = "POSLATA";
}*/

ostream& operator<<(ostream& it, ElektronskaPorukaSaTekstom& e)
{
	cout << e.ep << endl;
	cout << e.poruka << endl;
	return it;
	// TODO: insert return statement here
}
