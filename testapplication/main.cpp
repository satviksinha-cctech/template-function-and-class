#include "Inventory.h"
#include <iostream>
using namespace std;


struct Item {
    int id;
    string name;

    Item(int i, string n) : id(i), name(n) {}

    bool operator==(const Item& other) const {
        return id == other.id && name == other.name;
    }

    friend ostream& operator<<(ostream& os, const Item& item) {
        os << "ID: " << item.id << ", Name: " << item.name;
        return os;
    }
};

int main() {
    cout << "Generic Inventory System "<<endl;

    Inventory<int> idName;
    idName.addItem(101);
    idName.addItem(202);
    idName.addItem(303);
    idName.removeItem(202);
    idName.display();

    cout << endl;

    Inventory<string> fruits;
    fruits.addItem("Apples");
    fruits.addItem("Bananas");
    fruits.addItem("Oranges");
    fruits.removeItem("Bananas");
    fruits.display();

    cout << endl;

    Inventory<Item> storeItems;
    storeItems.addItem(Item(101, "Laptop"));
    storeItems.addItem(Item(102, "Mouse"));
    storeItems.addItem(Item(103, "Keyboard"));
    storeItems.removeItem(Item(102, "Mouse"));
    storeItems.display();

    return 0;
}
