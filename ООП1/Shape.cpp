#include "shape.h"


#include "QuadArr.h"
#include "DiagArr.h"
#include "TriagArr.h"

// ¬вод параметров 
// из стандартного потока ввода
Shape* Shape::In(ifstream &in)
{
	Shape *sp;

	int k;
	in >> k;

	switch (k)
	{
	case 1:
		sp = new QuadArr;
		break;
	case 2:
		sp = new DiagArr;
		break;
	case 3:
		sp = new TriagArr;
		break;
	default:
		return 0;
	}

	sp->InData(in);

	return sp;
}
