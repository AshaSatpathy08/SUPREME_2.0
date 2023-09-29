// check given number is even or odd 
#include <iostream>
using namespace std;

int findNumber(int num){
    if(num % 2 ==0){
        cout << "Number is Even";
    }
    else{
        cout << "Number is Odd";
    }
    return num;
}


int main(){
    int num;
    cout <<" enter a number" <<  endl;
    cin >> num;
    
    findNumber(num);

    return 0;
}