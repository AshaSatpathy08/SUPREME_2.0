#include <iostream>
#include<limits.h>
using namespace std;

int findmini(int arr[][4],int row, int col){
    int miniAns = INT_MAX;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] < miniAns){
                miniAns = arr[i][j];
            }
        }
    }
    return miniAns;
}

int main()
{
    int arr[3][4] = {
        {-1,2,3,4},
        {5,6,7,8},
        {9,2,4,50}
    };
    int row = 3;
    int col = 4;
    cout << "printing the mini no. :" << findmini(arr, row, col);
    return 0;
}