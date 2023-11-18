#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, n;
    cin >> n ;
    for(int i = 0; i < n; i++)    {      // tc : O(n^2) + O(n) = O(n^2);
            for(int i = 0; i < n; i++){
            cout << "hi\n";
        }
    }                                 
    for(int i = 0; i < n; i++){
        cout << "hi2\n";
    }
    return 0;
}