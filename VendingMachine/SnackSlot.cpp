#include "SnackSlot.h"

	SnackSlot::SnackSlot(int size)
	{
		if (size > 0)
		{
			_snackPlace = size;
			_snackArray = new Snack[size];
		}
	}

	SnackSlot& SnackSlot::operator=(const SnackSlot& otherSnackSlot)
	{
		this->_snackPlace = otherSnackSlot._snackPlace;
		this->_usedPlace = otherSnackSlot._usedPlace;
		this->_snackArray = new Snack[otherSnackSlot._snackPlace];

		for (int i = 0; i < otherSnackSlot._snackPlace; i++)
		{
			this->_snackArray[i] = otherSnackSlot._snackArray[i];
		}

		return *this;
	}

	SnackSlot::~SnackSlot()
	{
		if (_snackArray != nullptr)
			delete[] _snackArray;
	}

	bool SnackSlot::addSnack(const Snack* snack)
	{
		if (_snackPlace > _usedPlace)
		{
			_snackArray[_usedPlace] = *snack;
			++_usedPlace;
			return true;
		}
		else
		{
			return false;
		}
	}

	void SnackSlot::printAll()
	{
		for (int i = 0; i < _snackPlace; i++)
		{
			_snackArray[i].print();
		}
	}
