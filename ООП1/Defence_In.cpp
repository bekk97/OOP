#include "Defence.h"

void Defence::Defence_In(ifstream &in, int Case)
{
	switch (Case)
	{
	case 1:
		in >> Item;
		if (Item != "������������:" && !(in.eof()))
		{
			flag = false;
			while (Item != "������������:" && !(in.eof()))
				in >> Item;
			if (Item == "������������:")
				endoffile = false;
			else
				endoffile = true;
		}
		else
		{
			flag = true;
			endoffile = false;
		}
		break;
	case 2:
		in >> Item;
		if (Item != "��������:" && !(in.eof()))
		{
			flag = false;
			while (Item != "��������:" && !(in.eof()))
				in >> Item;
			if (Item == "��������:")
				endoffile = false;
			else
				endoffile = true;
		}
		else
		{
			flag = true;
			endoffile = false;
		}
		break;
	case 3:
		in >> Item;
		if (Item != "�������:" && !(in.eof()))
		{
			flag = false;
			while (Item != "�������:" && !(in.eof()))
				in >> Item;
			if (Item == "�������:")
				endoffile = false;
			else
				endoffile = true;
		}
		else
		{
			flag = true;
			endoffile = false;
		}
		break;

	default:
		break;
	}
}