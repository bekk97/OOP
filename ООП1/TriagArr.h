#ifndef __TriagArr__
#define __TriagArr__
#include "Shape.h"

class TriagArr : public Shape
{
	// стороны
	int t[6];
	int Array[3][3];
	char prov;
	bool perepoln = false;
	float Check;
	bool Test;
	float actualCheck = 0;



public:
	void InData(ifstream &in); // ввод
	void Out(ofstream &out); //вывод
	void UnitTest_In(ifstream &in);
	void UnitTest_Out(ofstream &out);
	TriagArr() {};  // создание без инициализации
};


#endif
