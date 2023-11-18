#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {    
        cout << "hi\n";
    }                                  // time complexity will be : O(n) + O(m) = O(n+m)
    for(int i = 0; i < n; i++){
        cout << "hi2\n";
    }
    return 0;
}