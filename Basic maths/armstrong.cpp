#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int c = n;
    cin>> n ;
    int sum = 0;
        while(n>0){
            int ld = n%10 ;
            sum = sum+ (ld*ld*ld);
            n=n/10;
        }
        if(sum == c){
                cout<<"true";
            }
            else{
                cout<< "false";
            }
    return 0;
}