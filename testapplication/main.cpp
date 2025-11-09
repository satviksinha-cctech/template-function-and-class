#include "Inventory.h"
#include <iostream>
using namespace std;

int main() {
    cout << "=== Generic Inventory System ===\n";

    Inventory<int> intInv;
    intInv.addItem(101);
    intInv.addItem(202);
    intInv.addItem(303);
    intInv.removeItem(202);
    intInv.display();

    cout << endl;

    Inventory<string> strInv;
    strInv.addItem("Apples");
    strInv.addItem("Bananas");
    strInv.addItem("Oranges");
    strInv.removeItem("Bananas");
    strInv.display();

    return 0;
}
