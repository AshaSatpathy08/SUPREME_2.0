//create a number using digit
#include <iostream>
using namespace std;

int createNumberUsingDigits( int numOfDigits){
    int num = 0;
    for( int i = 0; i < numOfDigits; i++){
        cout << "Enter Digit : " << endl;
        int digit;
        cin >> digit;
        num = num * 10 + digit ;
        cout << "number Creted so far : " << num << endl;

    }
    return num;
}

int main()
{
 int numOfDigits;
 cin >> numOfDigits;
 int num = createNumberUsingDigits(numOfDigits);
 cout << "Number created by digits : " << num << endl;
    return 0;
}