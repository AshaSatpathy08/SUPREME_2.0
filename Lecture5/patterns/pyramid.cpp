#include<iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;

    for (int i = 0; i<n; i++){
        // for space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        // for star
        for(int j = 0; j<i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}