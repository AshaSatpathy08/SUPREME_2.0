#include<iostream>
using namespace std;

// Function to calculate the sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter an integer: " << endl;
    cin >> num;

    int result = sumOfDigits(num);

    cout << "Sum of the digits is " << result << endl;

    return 0;
}
