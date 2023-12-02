#include <iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][4],int row, int col){
    int maxAns = INT_MIN;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] > maxAns){
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int main()
{
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,2,4,50}
    };
    int row = 3;
    int col = 4;
    cout << "printing the max no. :" << findMax(arr, row, col);
    return 0;
}