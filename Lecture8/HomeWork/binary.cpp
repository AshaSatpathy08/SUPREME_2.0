#include<bits/stdc++.h>
using namespace std;


int  decimalToBinary (int n )
{
  int X = 1;
    int ans = 0;
    while (X <= n) {
        X *= 2;
    }
    X /= 2;
    
    
    while(X>0)
    {
        int  LastDigit = n/X;
        n -= LastDigit*X;
        X/=2;
        ans = ans* 10 + LastDigit;
    }
    return ans;
}


int32_t main(){

    int n;
    cin >> n ;

    cout <<  decimalToBinary(n) << endl;




    return 0;
}
