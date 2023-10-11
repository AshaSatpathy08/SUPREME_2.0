#include <iostream>
using namespace std;

void printCounting(int n){
    //base case
    if(n == 1){
        cout << 1;
        return;
    }

    //processing
    cout << n << " "; // n se 1 tak print hoga
    // recursive call;
    printCounting(n-1);
     cout << n << " "; // 1 se n tak print hoga
}

int main()
{
    printCounting(10);
    return 0;
}