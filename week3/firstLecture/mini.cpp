#include <iostream>
#include <limits.h>
using namespace std;

int findMinimumInArray(int arr[], int size)
{
    int minAns = INT16_MAX;

    for(int i = 0; i < size; i++){
        if (arr[i] < minAns)
        {
            minAns = min(arr[i], minAns);
        }
        
    }
    return minAns;
}



int main()
{   
    // //  -2^31
    // cout << INT_MIN << endl;
    // // 2 to the power 31 - 1
    // cout << INT_MAX << endl;    

    int arr[] = {10,8,31,4,3,1,51};
    int size = 7;
    int minimum = findMinimumInArray(arr, size);
    cout << "Minimum Number is: " << minimum << endl;


    return 0;
}