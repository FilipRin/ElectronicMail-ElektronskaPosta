#include<iostream>

using namespace std;
#pragma once
#ifndef _VREMENSKAOZNAKA_H_
#define _VREMENSKAOZNAKA_H_

class VremenskaOznaka {
	int godina;
	int mesec;
	int sat;
	int dan;
	int minut;
public:
	VremenskaOznaka(int g,int m,int d,int s,int min);
	friend ostream& operator<<(ostream& it, VremenskaOznaka& v);
	~VremenskaOznaka() {}
};


#endif // !_VREMENSKAOZNAKA_H_