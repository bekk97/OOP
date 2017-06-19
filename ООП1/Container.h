#ifndef __Container__
#define __Container__

#include "Shape.h"
#include "Defence.h"

//-------------------------------------------------------------------------------------------------
// ���������� ��������� �� ������ ����������� �������
//-------------------------------------------------------------------------------------------------
class Container
{
	// ������������ �����
	enum { max_len = 100 };

	// ������� �����
	int len;

	Shape *cont[max_len];
	Defence *Defender[max_len];

public:
	//---------------------------------------------------------------------------------------------
	// ������������� ����������
	//---------------------------------------------------------------------------------------------
	Container() : len(0) {}

	//---------------------------------------------------------------------------------------------
	// ���������� ���������� ����� ������������
	//---------------------------------------------------------------------------------------------
	~Container()
	{
		Clear();
	}

	//---------------------------------------------------------------------------------------------
	// ���� ����� � ��������� �� �������� ������
	//---------------------------------------------------------------------------------------------
	void In(ifstream &in);

	//---------------------------------------------------------------------------------------------
	// ����� ����� � ��������� ������
	//---------------------------------------------------------------------------------------------
	void Out(ofstream &out);

	//---------------------------------------------------------------------------------------------
	// ������� ���������� �� �����
	//---------------------------------------------------------------------------------------------
	void Clear();

	void MultiMethod(ofstream &out);
};

#endif