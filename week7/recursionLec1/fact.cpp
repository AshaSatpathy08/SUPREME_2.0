#include <iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n == 1 || n == 0)
        return 1;

        
    //processing

    // recursive relation
    int recursionKaAns =  factorial(n-1);

    //processing
    int finalAns = n * recursionKaAns;
    return finalAns;

}

int main()
{
    cout << factorial(6);
    return 0;
}