// sum of all no upto n;
#include <iostream>
using namespace std;

void findSumUpToN(int n){
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout << "Final Answer is" << sum <<  endl;
}

int main()
{
    findSumUpToN(10);
    return 0;
}