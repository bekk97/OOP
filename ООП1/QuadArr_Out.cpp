#include "QuadArr.h"
#include "Defence.h"

void QuadArr::Out(ofstream &out) 
{
	Defence def;
	def.Defence_Out(out);
	if (perepoln == true)
		out << "��������� ����������" << endl;
	out << "��� ������� ��������� ������: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << a[i][j] << "\t";
		out << "\n";
	}
	prov = NULL;
	perepoln = false;
	QuadArr::UnitTest_Out(out);
}

