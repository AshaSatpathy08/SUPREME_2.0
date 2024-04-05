#include <iostream>
using namespace std;


void countZeroOne(int arr[], int size){
    int zeroCount = 0;
    int OneCount = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            OneCount++;
        }
    }

    cout << "ZeroCount: " << zeroCount <<endl;
    cout << "OneCount: " << OneCount;
}


int main()
{
    int arr[] = {0,0,0,1,1,0,1,1,0,1,1,0};  
    int size = 12;
    countZeroOne(arr,size);
    return 0;
}