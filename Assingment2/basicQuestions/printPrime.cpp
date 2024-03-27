//print all prime number from 1 to n

#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

void printPrimesUpToN(int n) {
    cout << "Prime numbers from 1 to " << n << ":" << endl;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printPrimesUpToN(num);

    return 0;
}
