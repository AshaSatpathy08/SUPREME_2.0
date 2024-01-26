#include <iostream>
using namespace std;

// void evenOdd(int number){
//     if(number <= 0){
//         cout << "Not A valid number" << endl;
//     }
//     else if(number % 2 == 0){
//         cout << " Number is Even" << endl;
//     }
//     else{
//         cout << "Number is odd" << endl;
//     }
// }


// bool checkEvenOdd(int num) {
//     if(num % 2 == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

bool checkEvenOdd(int num) {
    if(num & 1 == 0){
        return true;
    }
    else{
        return false;
    }
}



int main()
{
    // int number ;
    // cin >> number;
    // evenOdd(number);


    int num;
    cin >> num;
    bool isEven = checkEvenOdd(num);

    if(isEven){
        cout << num << "is Even number" << endl;        
    }
    else{
        cout << num << "is odd number " << endl;
    }

    return 0;
}