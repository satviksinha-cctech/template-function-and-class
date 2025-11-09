#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
int findItem(const vector<T>& items, const T& target) {
    for (size_t i = 0; i < items.size(); ++i)
        if (items[i] == target) return static_cast<int>(i);
    return -1;
}

template <typename T>
class Inventory {
private:
    vector<T> items;
public:
    void addItem(const T& item) { items.push_back(item); }
    void display() const {
        cout << "Inventory items:\n";
        for (const auto& i : items) cout << "- " << i << endl;
    }
    void removeItem(const T& item) {
        int pos = findItem(items, item);
        if (pos != -1) items.erase(items.begin() + pos);
    }
};

