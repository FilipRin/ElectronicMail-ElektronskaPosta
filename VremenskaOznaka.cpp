#include "VremenskaOznaka.h"
VremenskaOznaka::VremenskaOznaka(int g, int m, int s, int d, int min)
{
	godina = g;
	mesec = m;
	sat = s;
	minut = min;
	dan = d;
}

ostream& operator<<(ostream& it, VremenskaOznaka& v)
{
	cout << v.dan << "." << v.mesec << "." << v.godina << "-" << v.sat << ":" << v.minut << endl;
	// TODO: insert return statement here
	return it;
}
