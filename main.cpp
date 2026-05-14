#include <iostream>
#include<hash_table.h>
using std::cout;
int main() {
    HashTable* ht = ht_new(50);

    ht_insert(ht, "apple", "5");
    ht_insert(ht, "banana", "3");
    ht_insert(ht, "cherry", "8");

    cout << ht_search(ht, "apple") << "\n";   // 5
    cout << ht_search(ht, "banana") << "\n";  // 3
    cout << ht_search(ht, "cherry") << "\n";  // 8

    // test update
    ht_insert(ht, "apple", "99");
    cout << ht_search(ht, "apple") << "\n";   // 99

    // test delete
    ht_delete("banana", ht);
    cout << ht_search(ht, "banana") << "\n";  // empty

    ht_delete(ht);
}