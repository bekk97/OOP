#ifndef __TriagArr__
#define __TriagArr__
#include "Shape.h"

class TriagArr : public Shape
{
	// �������
	int t[6];
	int Array[3][3];
	char prov;
	bool perepoln = false;


public:
	void InData(ifstream &in); // ����
	void Out(ofstream &out); //�����
	TriagArr() {};  // �������� ��� �������������
};


#endif
