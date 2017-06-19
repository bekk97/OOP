#include "Defence.h"

void Defence::Defence_Out(ofstream &out)
{
	if (flag == false)
		out << "Не стоит читать сей файл дальше, т.к. порядок в нем сбит!!!" << endl << endl << endl << endl << endl;
}