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
            items[id] = Item(id, name, quantity);
            input >> name;
        }
        input.close();
    }
}

void Store::printItems() const
{
    for(map<int, Item>::const_reverse_iterator cit = items.rbegin(); cit != items.rend(); ++cit){
        cout << "id: " << (*cit).first << " - name: " << cit->second.getName() <<  " - quantity: " << (*cit).second.getQuantity() << endl;
    }
}

void Store::sellItem(int id, int quantity) const
{
    map<int, Item>::const_iterator it = items.find(id);
    if(it != items.end()){
        if((*it).second.getQuantity() >= quantity){
            cout << "Selling " << quantity << " item(s) with id " << id << endl;
        }
        else{
            cout << "Not enough item(s) to sell with id: " << id << "!" << endl;
        }
    }
    else{
        cout << "No item found with id " << id << endl;
    }
}
