#include <bits/stdc++.h>
using namespace std;

int main() {
    int num= 2;
    int n;

    while(num<n){

        if(n%num==0){
            cout<<"Not Prime";
            return 0;
        }
        else{
            cout<<"Prime";
            return 0;
        }
        num++;
    }
    
    return 0;
}