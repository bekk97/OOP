#include "QuadArr.h"


void QuadArr::UnitTest_Out(ofstream &out)
{
	out << "Среднее арифметическое найденое в программе: " << actualCheck << endl;
	out << "Заданное среднее арифметическое: " << Check << endl;
	if (Test == true)
	{
		out << "Тест пройден" << endl;
	}
	else {
		out << "Тест не пройден" << endl;
	}
	out << endl;
}

