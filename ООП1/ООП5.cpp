// ���1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "Container.h"

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	if (argc != 3)
	{
		cout << "���������� ������� ��� �������� ����� � ��� ��������� �����." << endl;
		system("pause");
		return 0;
	}
	ifstream in;
	in.open(argv[1]);
	if (!in)
	{
		cout << "���������� ����� ����!" << endl;
		system("pause");
		return 0;
	}
	ofstream out(argv[2]);

	cout << "��������! ���� ��������� ����������� �� ����, ��� ��������� ������� \"�����\"," << endl;
	cout << "�� ��� ������, ��� ������� ���� ����� ����� ������������ ���������" << endl;
	cout << "�����" << endl;

	Container c;
	cout << "����������..." << endl;
	c.In(in);
	cout << "������..." << endl;
	c.Out(out);

	c.Clear();

	cout << "�����" << endl;
	system("pause");

}

