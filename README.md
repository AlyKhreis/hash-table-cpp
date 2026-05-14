# Hash Table in C++

A hash table implementation from scratch in C++ with double hashing for collision resolution and dynamic resizing.

## Features
- **Double hashing** — two hash functions to minimize collisions
- **Dynamic resizing** — automatically grows when > 70% full, shrinks when < 10% full
- **Prime sizing** — table size is always prime to improve key distribution
- **Sentinel deletion** — safe deletion without breaking collision chains

## API
- `ht_insert(ht, key, value)` — insert or update a key-value pair
- `ht_search(ht, key)` — returns value for key, empty string if not found
- `ht_delete(key, ht)` — deletes a key-value pair

## Implementation Details
- Hash function uses ASCII values with a prime multiplier
- Load factor kept between 10% and 70%
- Collisions resolved via open addressing with double hashing


## Usage
```cpp
HashTable* ht = ht_new(53);
ht_insert(ht, "apple", "5");
ht_search(ht, "apple");   // returns "5"
ht_delete("apple", ht);
ht_delete(ht);            // cleanup
```