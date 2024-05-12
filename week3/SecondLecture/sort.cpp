#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n){
    int zeroCount = 0;
    int oneCount = 0;

    // Count the number of zeros and ones
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }

    // Rearrange the array with zeros followed by ones
    int index = 0;
    while(zeroCount--){
        arr[index] = 0;
        index++;
    }
    while(oneCount--){
        arr[index] = 1;
        index++;
    }
}


int main()
{
    int arr[] = {0,1,0,1,0,1,1,1,1,0,0,0,0};
    int n = 13;

    sortZeroOne(arr,n);

    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}