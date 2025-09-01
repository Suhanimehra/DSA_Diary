#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //vector 
    vector<int> v; // syntax to create a vector 

    v.push_back(1); // add the value 1 at the end of the vector
    v.push_back(2); // add the value 2 at the end of the vector
    // answer = {1 , 2}

    v.emplace_back(3); // add the value 3 at the end of the vector
    // answer = {1 , 2 , 3}

    // vector array 
    vector< int > a(5 , 1); // syntax to create a vector of size 5 and all values are 1
    // answer = {1 , 1 , 1 , 1 , 1}

    vector<int > b(5); // syntax to create a vector of size 5 and all values are 0
    // answer = {0 , 0 , 0 , 0 , 0}

   
    //how to access the value of a vector
    cout << v[2] << endl; // print the value at index 2 of the vector
    cout << v.at(2) << endl; // print the value at index 2 of the vector
    cout << v.back() << endl; // print the value at the last index of the vector
    cout << v.front() << endl; // print the value at the first index of the


    //Iterators in vector

    vector<int > :: iterator it = v.begin(); // it points to the first index of the vector
    cout << *(it) << endl; // print the value at the index where it is pointing
    

    it++; // it points to the next index of the vector
    cout << *(it) << endl; // print the value at the index where it is pointing     



    it = it + 2 ; // it points to the index 2 places ahead of the current index
    cout << *(it) << endl; // print the value at the index where it is pointing

    it--; // it points to the previous index of the vector
    cout << *(it) << endl; // print the value at the index where it is pointing


    vector<int> :: iterator it = v.end(); // it points to the last index of the vector
    //vector<int> :: iterator it = v.rbegin(); // it points to the last index of the vector
    //vector<int> :: iterator it = v.rend(); // it points to the last index of the vector


    for(vector<int>:: iterator it = v.begin(); it !=v.end() ; it++){
        cout << *(it) << " " ; //here * represents the value at the index where it is pointing 
    };

    for(auto it = v.begin() ; it != v.end() ; it++){
        cout<< *(it) << " ";
    };// auto keyword automatically detects the data type of the variable

    for(auto it : v){
        cout << it << " " ; // here it represents the value at the index of the vector
    }





    //how to erase or delete a value from a vector
    //{10,20,30,40,50}
    v.erase(v.begin() + 1); // erase the value at index 1 of the vector
    // answer = {10,30,40,50}


    v.erase(v.begin() + 1 , v.begin() + 2);
    // answer = {10,30,40,50}
    // erase the values from index 1 to index 2 (2 not included) of the vector[start , end )
    //here start is included in deletion but end is not included in deletion
    //end is in respect to the beginning of the vector


    //insert function in vector
    vector<int> v2(5,100); // this creates a vector with size 5 and value of 100
    // answer = {100 , 100 , 100 , 100 , 100}
    v2.insert(v2.begin(), 50); // this will insert value 50 at the beginning of the vector
    // answer = {50 , 100 , 100 , 100 , 100 , 100}
    v2.insert(v2.begin()+ 2 , 400); // this will insert value 400 at index 2 
    // answer = {50 , 100 , 400 , 100 , 100 , 100 , 100}
    v2.insert(v2.begin() + 1, 2 , 700); // this will insert value 700 two times at index 1

    v.size(); // this will return the size of the vector

    v.swap(v2); // this will swap the values of vector v and v2

    v.empty(); // this will return true if the vector is empty else it will return false

    v.clear(); // this will delete all the values of the vector and make it empty


    return 0;
}