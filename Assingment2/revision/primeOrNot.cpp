#include <iostream>
using namespace std;

bool checkPrime(int number) {
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}


int main()
{
    int number;
    cin >> number;
    bool isPrime = checkPrime(number);
    if(isPrime) {
        cout << "prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }
    return 0;
}