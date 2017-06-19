#include "DiagArr.h"
#include "Defence.h"

void DiagArr::Out(ofstream &out) 
{
	Defence def;
	def.Defence_Out(out);

	if (perepoln == true)
		out << " онтейнер переполнен" << endl;
	out << "Ёто диагональна€ матрица: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << Arr[i][j] << "\t";
		out << "\n";
	}
	prov = NULL;
	perepoln = false;
	DiagArr::UnitTest_Out(out);

}

