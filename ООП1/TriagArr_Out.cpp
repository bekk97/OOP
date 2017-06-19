#include "TriagArr.h"

void TriagArr::Out(ofstream &out) {
	if (perepoln == true)
		out << "Контейнер переполнен" << endl;
	out << "Это треугольная матрица: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << Array[i][j] << "\t";
		out << "\n";
	}
	prov = NULL;
	perepoln = false;
	TriagArr::UnitTest_Out(out);
}

