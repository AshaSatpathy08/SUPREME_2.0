#include <iostream>
using namespace std;

void colSum(int arr[][4], int row, int col){
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
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
    colSum(arr,row,col);
    return 0;
}