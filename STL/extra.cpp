#include <bits/stdc++.h>
using namespace std;

// Comparator function should be defined before main
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second > p2.second) return true;
    if (p1.second < p2.second) return false;
    if (p1.first > p2.first) return true;
    return false;
};

int main() {
    //sort
    int arr[5] = {5,4,3,2,1};
    sort(arr, arr+5); // sort the array arr of size n in ascending order
    
    sort(arr, arr+5, greater<int>()); // sort the array arr of size n in descending order

    //vector intialized already
    vector<int> v = {5,4,3,2,1};
    sort(v.begin(), v.end()); // sort the vector v in ascending order

    //sort according to second element of the pair
    //if second element is same then sort according to first element of the pair
    //in descending order
    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
    sort(a, a+3, comp); // Using the comp function to sort pairs
    
    //reverse
    reverse(arr, arr+5); // reverse the array arr of size n

    return 0;
}