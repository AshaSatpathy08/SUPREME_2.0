#include <iostream>
using namespace std;
 
int returnsum(int a, int b, int c){
    int finalAns = a + b + c;
    return finalAns;
}


int main()
{
    int sum = returnsum(2,4,5);
    cout << "Answer = " << sum << endl;
    return 0;
}