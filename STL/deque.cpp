#include <bits/stdc++.h>
using namespace std;

int main() {
    
    deque<int> dq; // syntax to create a deque

    dq.push_back(1); // add the value 1 at the end of the deque 

    dq.emplace_back(2); // add the value 2 at the end of the deque

    dq.push_front(0); // add the value 0 at the front of the deque

    dq.emplace_front(-1); // add the value -1 at the front of the deque

    dq.pop_back(); // remove the value at the end of the deque

    dq.pop_front(); // remove the value at the front of the deque

    dq.back(); // returns the value at the end of the deque

    dq.front(); // returns the value at the front of the deque

    dq.size(); // returns the size of the deque

    //rest all same as vector
    //rend,begin,end,insert,at,clear,swap
    
    return 0;
}