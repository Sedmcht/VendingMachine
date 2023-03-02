#pragma once
#include "SnackSlot.h"

class VendingMachine
{
	int _snackStackPlace = 0;
	int _usedStackPlace = 0;
	SnackSlot* _snackStackArray = nullptr;

public:

	VendingMachine(int size = 0);
	~VendingMachine();
	bool addSlot(const SnackSlot* snackStack);
	int getEmptySlotsCount();
	void printAll();
};

