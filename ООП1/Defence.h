#pragma once
#include <fstream>
#include <string>
using namespace std;

class Defence
{
public:
	string Item;
	bool flag = true;
	bool endoffile = false;
	void Defence_In(ifstream &in, int Case);
	void Defence_Out(ofstream &out);
};

