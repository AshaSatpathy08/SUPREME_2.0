#include <iostream>
using namespace std;

int factorial(int number) {
    int fact = 1;
    for(int i = 1; i <= number; i++) {
        fact = fact * i;
    }
    return fact;
}


int main()
{
    int number;
    cin >> number;
    int answer = factorial(number);

    cout << "factorial of " << number << " is " << answer << endl;

    return 0;
}