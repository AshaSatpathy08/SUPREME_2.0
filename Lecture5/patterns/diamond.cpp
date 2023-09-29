#include<iostream>
using namespace std;

int main() {
    int num ;
    cin >> num;
    int n = num/2;
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

        for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

//for diamond shape pyramid you have to create a full pyramid and inverted half pyramid 