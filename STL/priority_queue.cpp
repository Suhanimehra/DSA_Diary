#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //MAX HEAP
    //max value stays at the top of the queue
    priority_queue<int> pq; // syntax to create a priority queue
    pq.push(4); // add the value 4 to the priority queue
    pq.push(2); // add the value 2 to the priority queue
    pq.push(10); // add the value 10 to the priority queue
    pq.emplace(1); // add the value 1 to the priority queue
    // answer = {10 , 4 , 2 , 1} -> 10

    pq.top(); // returns the value at the top of the priority queue -> 10
    pq.pop(); // remove the value at the top of the priority queue
    // answer = {4 , 2 , 1} -> 4

    //MIN HEAP
    priority_queue<int , vector<int> , greater<int> > minheap; // syntax to create a min heap
    minheap.push(4); // add the value 4 to the min heap
    minheap.push(2); // add the value 2 to the min heap
    minheap.push(10); // add the value 10 to the min heap
    minheap.emplace(1); // add the value 1 to the min heap

    // answer = {1 , 2 , 10 , 4} -> 1
    
    return 0;
}
