// find sum of all even number up to n;

#include <iostream>
using namespace std;

void findEvenSum(int n){
    int sum = 0;
    for(int i = 2; i <= n; i = i+2){
        sum = sum + i;
    }
    cout << "Final Answer is: " << sum <<  endl;
}
int main()
{
    findEvenSum(10);
    return 0;
}