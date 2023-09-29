//NUMERIC HOLLOW HALF PYRAMID
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print numbers in decreasing order
        for (int k = i; k >= 1; k--) {
            if (k == i || k == 1 || i == n) {
                cout << k;
            } else {
                cout << " ";
            }
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
