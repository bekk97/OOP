#include "Defence.h"

void Defence::Defence_In(ifstream &in, int Case)
{
	switch (Case)
	{
	case 1:
		in >> Item;
		if (Item != "Наименование:" && !(in.eof()))
		{
			flag = false;
			while (Item != "Наименование:" && !(in.eof()))
				in >> Item;
			if (Item == "Наименование:")
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
		if (Item != "Элементы:" && !(in.eof()))
		{
			flag = false;
			while (Item != "Элементы:" && !(in.eof()))
				in >> Item;
			if (Item == "Элементы:")
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
		if (Item != "Среднее:" && !(in.eof()))
		{
			flag = false;
			while (Item != "Среднее:" && !(in.eof()))
				in >> Item;
			if (Item == "Среднее:")
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