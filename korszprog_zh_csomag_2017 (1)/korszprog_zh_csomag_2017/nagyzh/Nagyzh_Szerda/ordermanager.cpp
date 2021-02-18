#include "ordermanager.h"

OrderManager::OrderManager()
{

    populateItems();
}

OrderManager::~OrderManager()
{

}

void OrderManager::populateItems()
{
    items[1] = Item(1, "Beer", 800);
    items[2] = Item(2, "Champagne", 900);
    items[3] = Item(3, "Soft drink", 1100);
    items[4] = Item(4, "Whiskey", 750);
    items[5] = Item(5, "Wine", 850);
}
