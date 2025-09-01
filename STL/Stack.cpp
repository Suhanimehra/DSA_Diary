#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //LIFO -> last in first out
    stack<int> st; // syntax to create a stack

    st.push(1); // add the value 1 at the top of the stack
    st.push(2); // add the value 2 at the top of the stack
    st.push(3); // add the value 3 at the top of the stack      
    // answer = {1 , 2 , 3} -> 3 is at the top of the stack

    st.top(); // returns the value at the top of the stack -> 3

    st.emplace(4); // add the value 4 at the top of the stack
    // answer = {1 , 2 , 3 , 4} -> 4 is at the top of the stack     

    st.pop(); // remove the value at the top of the stack
    // answer = {1 , 2 , 3} -> 3 is at the  

    st.size(); // returns the size of the stack -> 3

    stack<int> st2; // syntax to create another stack
    
    st.swap(st2); // swaps the values of two stacks
    
    return 0;
}