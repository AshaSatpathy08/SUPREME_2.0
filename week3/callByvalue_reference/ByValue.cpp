#include <iostream>
using namespace std;

void incrementByOne( int &n){
    n = n + 1;
}

int main()
{

    int n;
    cin >> n;
    incrementByOne(n); //CALL BY VALUE
    cout << "n: " << n << endl;

    
    return 0;
}
