#ifndef __QuadArr__
#define __QuadArr__
#include "Shape.h"

class QuadArr : public Shape 
{
	// �������
	int a[3][3];
	char prov;
	bool perepoln = false;


public:
	void InData(ifstream &in); // ����
	void Out(ofstream &out); //�����

	void MultiMethod(Shape *other, ofstream &out);
	void MMQuad(ofstream &out);
	void MMDiag(ofstream &out);

	QuadArr() {};  // �������� ��� �������������
};


#endif
