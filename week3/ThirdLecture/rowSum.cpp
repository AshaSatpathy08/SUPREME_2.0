#include <iostream>
using namespace std;

void rowSum(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum = sum + arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 2, 4, 50}
    };
    int row = 3;
    int col = 4;

    rowSum(arr, row, col);

    return 0;
}
