#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";  
    cin >> n;
    // Pattern 1
    // * * * * * 
    // * * * *
    // * * *
    // * *
    // *
    // for (int i = 1 ; i<=n ; i++){
    //     for (int j =i ; j<=n ; j++){
    //         cout << "* "  ;
    //     }
    //     cout << endl;
    // 

    // Pattern 2
    // *
    // * *      
    // * * *
    // * * * *  
    
    // for (int i = 1 ; i <= n ; i ++){
    //     for (int j = 1 ; j <=i ; j++){
    //         cout << "* " ;
    //     }
    //     cout << endl;
    // }
    

    //pattern 3 
    //* * * *
    //* * * * 
    //* * * *
    //* * * *
    // for(int i = 1; i<=n ; i++){
    //     for(int j = 1 ; j<=n ; j++){
    //         cout << "* " ;
    //     }
    //     cout << endl;
    // }

    // pattern 4
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4


    // for(int i = 1 ; i<=n ; i ++){
    //     for(int j = 1 ; j<=i ; j++){
    //         cout << j << " " ;
    //     }
    //     cout<< endl;
    // }

    //pattern 5 
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // for(int i = 1 ; i<= n ; i++){
    //     for(int j = 1 ; j<=i ; j++){
    //         cout<< i <<" ";
    //     }
    //     cout << endl;
    // }


    //pattern 6 
    // 1 2 3 4 5 
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5 
    // 1 2 3 4 5


    // for(int i = 1 ; i<= n ; i++){
    //     for(int j = 1 ; j<=n ; j++){
    //         cout<<j <<" ";
    //     }
    //     cout << endl;
    // }

    //pattern 7
    // 1 2 3 4 5 
    // 1 2 3 4
    // 1 2 3 
    // 1 2
    // 1

     for(int i = 1  ; i<=n ; i ++ ){

        for(int j = 1 ; j<=i ; j++){
            cout << i << " " ;
        }
        cout<< endl;
    }
    return 0;
}