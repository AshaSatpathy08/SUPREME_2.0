#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, n;
    cin >> n;
    for(int i = 0; i < n; i++){   // tc:  O(n^2) 
        for(int j = n; j > i; j--){
            cout << "hi1\n";
        }
    }
    return 0;
}