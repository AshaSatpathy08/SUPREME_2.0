#include <iostream>
using namespace std;

int incrementByOne( int n){
    n = n + 1;
    return n;
}

int main()
{

    int n;
    cin >> n;
    n = incrementByOne(n); //CALL BY VALUE
    cout << "n: " << n << endl;

    
    return 0;
}
