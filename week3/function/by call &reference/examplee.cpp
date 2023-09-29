#include<iostream>
using namespace std;

int incrementBy1(int n){
    n = n + 1;
    return n;

}

int main() {
    int n;
    cin >> n;
    n = incrementBy1(n);
    
    cout << "n: "<< n << endl;

}