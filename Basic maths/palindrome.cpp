#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>> x ;
    int reversenum = 0 ; 
    int c = x;

    while(x>0){
        int lastdigit = x % 10 ;

        reversenum  = (reversenum * 10 ) + lastdigit;

        x=x/10;
        
    }

    if(c==reversenum){
            cout<< "true";
        }
    else{
            cout<< "false";
        }
    return 0;
}