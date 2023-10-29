// check prime or not
#include <iostream>
using namespace std;

bool checkPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    bool prime = checkPrime(2);

    if(prime ){
        cout << "its a prime number";
    }
    else{
        cout << "not a prime number";
    }
    return 0;
}