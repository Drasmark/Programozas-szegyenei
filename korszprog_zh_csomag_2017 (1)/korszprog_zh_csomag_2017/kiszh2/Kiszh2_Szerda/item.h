#ifndef ITEM_H
#define ITEM_H

#include<string>

using namespace std;

class Item
{
private:
    int id;
    string name;
    int quantity;
public:
    Item();
    Item(int _id, string _name, int _quantity);
    int getId() const;
    const string& getName() const;
    int getQuantity() const;
};

#endif // ITEM_H
