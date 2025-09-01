#include <bits/stdc++.h>
using namespace std;

int main() {
    

    list <int> ls; // syntax to create a list

    ls.push_back(1); // add the value 1 at the end of the list

    ls.emplace_back(2); // add the value 2 at the end of the list

    ls.push_front(0); // add the value 0 at the front of the list

    ls.emplace_front(-1); // add the value -1 at the front of the list

    //rest all same as vector 
    //rend,begin,end,insert,size,erase,clear,swap
    return 0;
}