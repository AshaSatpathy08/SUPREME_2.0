#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatix(vector<vector<int>> v) {
    int m = v.size();    // Number of rows in the matrix
    int n = v[0].size(); // Number of columns in the matrix

    // Loop through each column
    for (int startCol = 0; startCol < n; startCol++) {
        // If the current column is even, print elements from top to bottom
        if ((startCol & 1) == 0) {
            for (int i = 0; i < m; i++) {
                cout << v[i][startCol] << " ";
            }
        } else {
            // If the current column is odd, print elements from bottom to top
            for (int i = m - 1; i >= 0; i--) {
                cout << v[i][startCol] << " ";
            }
        }
    }
}

int main() {
    // Define a 2D vector
    vector<vector<int>> v {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Call the wavePrintMatix function with the defined matrix
    wavePrintMatix(v);

    return 0;
}
