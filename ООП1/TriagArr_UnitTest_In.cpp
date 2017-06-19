#include "TriagArr.h"
#include <string>
#include <cmath>

void TriagArr::UnitTest_In(ifstream &in)
{
	string get;
	in >> get;
	Check = stof(get);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			actualCheck += Array[i][j];
	actualCheck /= 9;
	actualCheck = round(actualCheck * 10) / 10.;
	if (actualCheck != Check)
		Test = false;
	else
		Test = true;
}

