#include "store.h"

Store::Store(string _name) : name(_name) {}

void Store::readItems(const string &file_name)
{
    ifstream input(file_name);
    if(input.is_open()){
        string name;
        input >> name;
        while(name != "*"){
            int id;
            int quantity;
            input >> id >> quantity;
            items[name] = Item(id, name, quantity);
            input >> name;
        }
        input.close();
    }
}

void Store::printItems() const
{
    for(map<string, Item>::const_iterator cit = items.cbegin(); cit != items.cend(); ++cit){
        cout << (*cit).first << " - quantity: " << (*cit).second.getQuantity() << endl;
    }
}

void Store::sellItem(const string &name, int quantity) const
{
    map<string, Item>::const_iterator it = items.find(name);
    if(it != items.end()){
        if((*it).second.getQuantity() >= quantity){
            cout << "Selling " << quantity << " " << name << endl;
        }
        else{
            cout << "Not enough " << name << " to sell!" << endl;
        }
    }
    else{
        cout << "No item found with name " << name << endl;
    }
}
