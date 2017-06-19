#include "TriagArr.h"

void TriagArr::InData(ifstream &in) {
	for (int i = 0; i < 6; i++)
		in >> t[i];
	in >> prov;
	if (prov != '&')
	{
		perepoln = true;
		while (prov != '&')
			in >> prov;
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			Array[i][j] = 0;
		}
	}
	int m = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			Array[i][j] = t[m];
			m++;
		}
	}
	TriagArr::UnitTest_In(in);

}

