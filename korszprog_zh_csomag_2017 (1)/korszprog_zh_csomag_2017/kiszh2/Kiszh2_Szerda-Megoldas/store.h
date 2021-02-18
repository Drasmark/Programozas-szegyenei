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
    map<string, Item> items;
public:
    Store(string _name);
    void readItems(const string& file_name);
    void printItems() const;
    void sellItem(const string& name, int quantity) const;
};

#endif // STORE_H
