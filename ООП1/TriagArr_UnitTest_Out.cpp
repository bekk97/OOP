#include "TriagArr.h"


void TriagArr::UnitTest_Out(ofstream &out)
{
	out << "������� �������������� �������� � ���������: " << actualCheck << endl;
	out << "�������� ������� ��������������: " << Check << endl;
	if (Test == true)
		out << "���� �������" << endl;
	else
		out << "���� �� �������" << endl;
	out << endl;
}

