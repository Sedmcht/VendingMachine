#include "Snack.h"
#include <iostream>
#include <string>

using namespace std;

Snack::Snack(string name) : _name(name) {}

Snack& Snack::operator=(const Snack& otherSnack)
{
	this->_name = otherSnack._name;
	return *this;
}

void Snack::print()
{
	if(_name.size() > 0)
	cout << _name << endl;
}

