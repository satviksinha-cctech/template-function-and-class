#include "Inventory.h"
#include <iostream>
using namespace std;

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

    return 0;
}
