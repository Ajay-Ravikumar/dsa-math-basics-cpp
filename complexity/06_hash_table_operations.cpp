#include <bits/stdc++.h>
using namespace std;

// Simple hash table using separate chaining
class HashTable {
    int BUCKET;
    vector<list<int>> table;
public:
    HashTable(int b) {
        BUCKET = b;
        table.resize(BUCKET);
    }

    int hashFunction(int x) {
        return x % BUCKET;
    }

    void insertItem(int key) {
        int idx = hashFunction(key);
        table[idx].push_back(key);
    }

    void deleteItem(int key) {
        int idx = hashFunction(key);
        table[idx].remove(key);
    }

    bool searchItem(int key) {
        int idx = hashFunction(key);
        for (auto x : table[idx])
            if (x == key) return true;
        return false;
    }

    void display() {
        for (int i = 0; i < BUCKET; i++) {
            cout << i;
            for (auto x : table[i]) cout << " --> " << x;
            cout << endl;
        }
    }
};

int main() {
    HashTable ht(7);
    ht.insertItem(15);
    ht.insertItem(11);
    ht.insertItem(27);
    ht.insertItem(8);
    ht.insertItem(12);

    ht.display();
    cout << "Search 12: " << ht.searchItem(12) << endl;
    ht.deleteItem(12);
    ht.display();
}
