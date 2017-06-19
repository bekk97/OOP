// ООП1.cpp: определяет точку входа для консольного приложения.
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
		cout << "Необходимо указать имя входного файла и имя выходного файла." << endl;
		system("pause");
		return 0;
	}
	ifstream in;
	in.open(argv[1]);
	if (!in)
	{
		cout << "Невозможно найти файл!" << endl;
		system("pause");
		return 0;
	}
	ofstream out(argv[2]);

	cout << "Внимание! Если программа завершилась до того, как появилась надпись \"Конец\"," << endl;
	cout << "то это значит, что входной файл имеет очень неправильную структуру" << endl;
	cout << "Старт" << endl;

	Container c;
	cout << "Считывание..." << endl;
	c.In(in);
	cout << "Запись..." << endl;
	c.Out(out);

	c.Clear();

	cout << "Конец" << endl;
	system("pause");

}

