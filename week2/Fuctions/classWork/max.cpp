// find max of three number
#include <iostream>
using namespace std;

// void printMax(int num1, int num2, int num3){
//     if(num1 > num2 && num1 > num3){
//         cout << "Maximum is: " << num1 << endl;
//     }
//     else if(num2 > num1 && num2 > num3){
//         cout << "Maximum is: " << num2 << endl;
//     }
//     else{
//         cout << "Maximum is: " << num3 <<   endl;
//     }
// }

int printMax(int a, int b, int c){
    int ans1 = max(a, b);
    int finalAns = max(ans1,c);
    return finalAns;
}


int main()
{
    int MaximumNum = printMax(400, 88, 10);
    cout << "final Ans is : " << MaximumNum << endl;
    return 0;
}