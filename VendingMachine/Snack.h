#pragma once
#include <string>
using namespace std;

class Snack
{
	string _name;
public:
	Snack(string name = "");
	Snack& operator=(const Snack& otherSnack);
	void print();
};
