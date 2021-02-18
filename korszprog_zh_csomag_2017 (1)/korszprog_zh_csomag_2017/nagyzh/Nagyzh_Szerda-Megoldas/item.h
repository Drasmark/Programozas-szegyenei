#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item
{
private:
    int itemNumber;
    string itemName;
    int stock;
public:
    Item(){}
    Item(int _itemNumber, const string& _itemName, int _stock);
    int getItemNumber() const;
    string getItemName() const;
    int getStock() const;
    void decreaseStock(int value);
};

#endif // ITEM_H
