#ifndef __DiagArr__
#define __DiagArr__
#include "Shape.h"

class DiagArr : public Shape 
{
	int b[3];
	int Arr[3][3];
	char prov;
	bool perepoln = false;
	float Check;
	bool Test;
	float actualCheck = 0;


public:
	void InData(ifstream &in); // ����
	void Out(ofstream &out); // �����
	void UnitTest_In(ifstream &in);
	void UnitTest_Out(ofstream &out);
	DiagArr() {}; // �������� ��� �������������
};

#endif

