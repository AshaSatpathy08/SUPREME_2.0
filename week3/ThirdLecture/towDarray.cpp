#include <iostream>
using namespace std;

// void printArray(int arr[3][4], int row, int col){
//     for(int i = 0; i < row; i++){ 
//         for(int j = 0; j < col; j++){                  //row wise access
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void printArrayCol(int arr[3][4], int row, int col){
//     for(int i = 0; i < col; i++){
//         for(int j = 0; j < row; j++){                     // col wise access;
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }




int main()
{
    // creation of array
    // int arr[3][3];
    
    // initialization
    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,2,4,5}
    // };

    //     int brr[][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},        // chal jaega
    //     {9,2,4,5}
    // };

    //     int crr[3][] = {
    //     {1,2,3,4},
    //     {5,6,7,8},           //ye nahi chalega ; 2d array me colum ka size dena mandatory hai
    //     {9,2,4,5}
    // };

    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,2,4,5}
    // };

    // int row =  3;
    // int col = 4;
    // printArray(arr, row, col);
    // printArrayCol(arr, row, col);


    // taking input in an array
    int arr[3][3];
    int row = 3, col = 3;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "enter the input for row index: " << i<< "column" << j <<  endl;
            cin >> arr[i][j];
        }
    }


    for(int i = 0; i < row; i++){ 
        for(int j = 0; j < col; j++){                 
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}