#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[4][4], int row, int col) {
    for(int i = 0; i < col; i++) {  // Swap row and col in the loop
        for(int j = 0; j < row; j++) {  // Swap row and col in the loop
            cout << arr[j][i] << " ";  // Swap indices when accessing elements
        }
        cout << endl;
    }
}


void transpose(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for(int j = i+1; j < col; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 2, 4, 5},
        {2, 5, 8, 0}
    };
    int row = 4;
    int col = 4;

    cout << endl <<  " Printing before transpose" << endl;
    printArray(arr, row, col);
    cout << endl << "doing transpose" << endl;
    transpose(arr, row, col);
    cout << endl <<  " Printing after transpose" << endl;
    printArray(arr, row, col);
    return 0;
}
