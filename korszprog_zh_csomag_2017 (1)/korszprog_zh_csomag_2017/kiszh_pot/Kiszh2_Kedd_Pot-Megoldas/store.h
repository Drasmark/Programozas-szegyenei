#ifndef STORE_H
#define STORE_H

#include<string>
#include<map>
#include<iostream>
#include<fstream>

#include "item.h"

using namespace std;

class Store
{
private:
    string name;
    map<int, Item> items;
public:
    Store(string _name);
    void readItems(const string& file_name);
    void printItems() const;
    void sellItem(int id, int quantity) const;
};

#endif // STORE_H
