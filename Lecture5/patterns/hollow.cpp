#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i<n; i++){
        // for space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        // for star
        for(int j = 0; j<i+1; j++){ // col = row + 1;
            if(j == 0 || j == i){   // col = row + 1 - 1 = row (if we have n numbers it start from 0th index so last will be n-1 ... here is also like that  )
                cout << "* ";
            }
            else{
                cout << "  " ;
            }
        }
        cout << endl;
    }    
}