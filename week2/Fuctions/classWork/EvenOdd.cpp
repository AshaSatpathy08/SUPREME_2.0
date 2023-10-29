#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    if (num % 2 == 0 ){
        cout << "Number is Even";
    }
    else{
        cout << "Number is Odd" ;
    }
}

int main()
{
    checkEvenOdd(0);
    return 0;
}