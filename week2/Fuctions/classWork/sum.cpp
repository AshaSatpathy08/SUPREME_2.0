// waf to print sum of 3 numbers

#include <iostream>
using namespace std;

void sum(int a, int b, int c){
    int ans = a + b + c;
    cout << "Sum = " << ans << endl;
}

int main()
{
    sum(5, 6, 9);
    return 0;
}