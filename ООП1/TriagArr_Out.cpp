#include "TriagArr.h"
#include "Defence.h"

void TriagArr::Out(ofstream &out) 
{
	Defence def;
	def.Defence_Out(out);
	if (perepoln == true)
		out << "��������� ����������" << endl;
	out << "��� ����������� �������: " << endl;
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

