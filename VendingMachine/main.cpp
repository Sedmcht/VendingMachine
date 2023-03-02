#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
#include <iostream>


int main() {
	int slotCount = 10;

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);

	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	cout << machine->getEmptySlotsCount() << endl; // Должно выводить количество пустых слотов для снеков

	machine->printAll();

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}