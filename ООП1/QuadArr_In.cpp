#include "QuadArr.h"
#include "Defence.h"

void QuadArr::InData(ifstream &in) 
{
	Defence def;
	def.Defence_In(in, 2);
	if (def.endoffile == false)
	{
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				in >> a[i][j];
		in >> prov;
		if (prov != '&')
		{
			perepoln = true;
			while (prov != '&')
				in >> prov;
		}
		QuadArr::UnitTest_In(in);
	}
	else
	{
		return;
	}
}

