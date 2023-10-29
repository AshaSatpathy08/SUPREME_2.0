#include <iostream>
using namespace std;

bool CheckEvenOdd(int num){
    if(num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int result = CheckEvenOdd(10);
    cout << result << endl;
    return 0;
}
