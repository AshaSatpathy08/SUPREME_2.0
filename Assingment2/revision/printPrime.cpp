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
    for(int i = 1; i <= number; i++){
        bool isiPrime = checkPrime(i);
        if(isiPrime){
            cout << i << " ";
        }
    }
    return 0;
}