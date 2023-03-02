#include "VendingMachine.h"

VendingMachine::VendingMachine(int size)
	{
		if (size > 0)
		{
			_snackStackPlace = size;
			_snackStackArray = new SnackSlot[size];
		}
	}

VendingMachine::~VendingMachine()
	{
		if (_snackStackArray != nullptr)
			delete[] _snackStackArray;
	}

	bool VendingMachine::addSlot(const SnackSlot* snackStack)
	{
		if (_snackStackPlace > _usedStackPlace)
		{
			_snackStackArray[_usedStackPlace] = *snackStack;
			++_usedStackPlace;
			return true;
		}
		else
		{
			return false;
		}
	}

	int VendingMachine::getEmptySlotsCount()
	{
		return _snackStackPlace - _usedStackPlace;
	}

	void VendingMachine::printAll()
	{
		for (int i = 0; i < _snackStackPlace; i++)
		{
			_snackStackArray[i].printAll();
		}
	}

