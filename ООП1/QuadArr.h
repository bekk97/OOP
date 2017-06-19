#ifndef __QuadArr__
#define __QuadArr__
#include "Shape.h"

class QuadArr : public Shape 
{
	// стороны
	int a[3][3];
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
	QuadArr() {};  // создание без инициализации
};


#endif
