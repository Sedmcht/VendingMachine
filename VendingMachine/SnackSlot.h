#pragma once
#include "Snack.h"

class SnackSlot
{
	int _snackPlace = 0;
	int _usedPlace = 0;
	Snack* _snackArray = nullptr;

public:
	
	SnackSlot(int size = 0);
	SnackSlot& operator=(const SnackSlot& otherSnackSlot);
	~SnackSlot();
	bool addSnack(const Snack* snack);
	void printAll();
};