#ifndef __Shape__
#define __Shape__

#include <fstream>
using namespace std;

class Shape
{
public:
	int peremen = 0;
	static Shape* In(ifstream &ifst);
	virtual void InData(ifstream &in) = 0;
	virtual void Out(ofstream &out) = 0;

	virtual void MultiMethod(Shape *other, ofstream &out) = 0;
	virtual void MMDiag(ofstream &out) = 0;
	virtual void MMQuad(ofstream &out) = 0;
	virtual void MMTriag(ofstream &out) = 0;


};

#endif
