#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividend){
    int s = 0;
    int e = dividend;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(mid * divisor == dividend){
            return mid;
        }
        if(mid * divisor < dividend){
            // answer ko store karna hai 
            ans = mid;
            //right me jana hai
            s = mid + 1;
        }
        else{
            // left me jao
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int divisor = -7;
    int dividend = 35;

    int ans = getQuotient(abs(divisor),abs(dividend));   //abs() returns the absolute value of the argument

    //now we need to decide ki sign konsa lagana hai +ve or -ve 
    if((divisor >0 && dividend < 0) || (divisor < 0 && dividend > 0)){
        ans = 0 - ans;
    }

    cout << "final answer is: " << ans << endl;
    return 0;
}