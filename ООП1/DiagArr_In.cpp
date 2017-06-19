#include "DiagArr.h"
#include "Defence.h"
void DiagArr::InData(ifstream &in) 
{
	Defence def;
	def.Defence_In(in, 2);
	if (def.endoffile == false)
	{
		for (int i = 0; i < 3; i++)
			in >> b[i];
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
				Arr[i][j] = 0;
			}
		}

		for (int i = 0; i < 3; i++)
		{
			Arr[i][i] = b[i];
		}
		DiagArr::UnitTest_In(in);
	}
	else
	{
		return;
	}

}

