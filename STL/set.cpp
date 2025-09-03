#include <bits/stdc++.h>
using namespace std;

int main() {
    //Stores only unique values in sorted order
    set<int> s; // syntax to create a set
    s.insert(1); // insert the value 1 in the set

    s.emplace(2); // insert the value 2 in the set
    s.insert(2); // insert the value 2 in the set
    // answer = {1 , 2} -> 2 is inserted only once as set stores only unique values

    s.find(1); // returns the iterator to the value 1 in the set

    s.erase(2); // erase the value 2 from the set
    // answer = {1}

    s.count(1); // returns 1 if the value 1 is present in the set else returns 0

    //multiset

    //not unique values allowed
    
    multiset<int> ms; // syntax to create a multiset
    ms.insert(1); // insert the value 1 in the multiset
    ms.insert(1); // insert the value 1 in the multiset
    ms.insert(2); // insert the value 2 in the multiset
    // answer = {1 , 1 , 2} -> 1 is inserted twice
    

    //unordered set

    //stores only unique values in unsorted order
    //rest same as set

     unordered_set<int> us; // syntax to create an unordered set        
    return 0;
}