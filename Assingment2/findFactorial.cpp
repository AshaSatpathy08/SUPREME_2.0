// find factorial of number
#include <iostream>
using namespace std;

int factorial(int num){
    if (num < 0){
        cout << " Factorial is not defined for negative numbers" << endl;
        return 0;
    }

    int result = 1;
    for(int i = 1; i <=num; i++){
        result = result * i;
    }

    return result;
}


int main(){
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    int result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;


    return 0;
}