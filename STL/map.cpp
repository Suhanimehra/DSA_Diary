#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map<int, int> mp; // syntax to create a map
    //map<key value> name;

    // key can be of any data type

    mp[1] = 2; // insert the value 2 at key 1 in the map
    mp[5] = 10; // insert the value 10 at key 5

    mp.insert({3, 6}); // insert the value 6 at key 3 in the map
    mp.emplace(4, 8); // insert the value 8 at key 4 in the map
    // answer = {1,2} , {3,6} , {4,8} , {5,10}

    // map stores the values in sorted order of keys
    // map stores only unique keys

    //multimap

    // not unique keys allowed

    //unordered map

    // stores the values in unsorted order
    // rest same as map
    
    return 0;
}