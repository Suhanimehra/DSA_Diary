#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //FIFO -> first in first out

    queue<int> q; // syntax to create a queue

    q.push(1); // add the value 1 at the end of the queue
    q.push(2); // add the value 2 at the end of the queue
    q.emplace(3); // add the value 3 at the end of the queue
    // answer = {1 , 2 , 3} -> 1 is at the

    q.back();
    // returns the value at the end of the queue -> 3

    q.front(); // returns the value at the front of the queue -> 1

    q.pop(); // remove the value at the front of the queue
    // answer = {2 , 3} -> 2 is at the front of the

    q.back() += 5; // add 5 to the value at the end of the queue
    cout << q.back() << endl; // print the value at the end of the queue
    // answer = {2 , 8} -> 2 is at the front of the queue and 8 is at the end of the queue
    
    //rest all same as stack
    //size,swap,empty
    return 0;
}