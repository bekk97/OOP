#include "Container.h"

void Container::MultiMethod(ofstream &out) 
{
	out << "Ìףכüעטלועמה!" << endl;
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = i + 1; j < len; j++) 
		{
			cont[i]->MultiMethod(cont[j], out);
			cont[i]->Out(out);
			cont[j]->Out(out);
		}
	}
}
