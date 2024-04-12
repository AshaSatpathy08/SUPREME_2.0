#include <iostream>
using namespace std;
void shiftLeftByK(int arr[], int size, int k) {
    // Create an array to store the first k elements
    int temp[k];
    for (int i = size - k, j = 0; i < size; ++i, ++j) {
        temp[j] = arr[i];
    }

    // Shift elements to the right by k positions
    for (int i = size - 1; i >= k; --i) {
        arr[i] = arr[i - k];
    }

    // Assign the stored elements to the beginning of the array
    for (int i = 0; i < k; ++i) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Number of positions to shift left by

        cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
        cout << endl;

    shiftLeftByK(arr, size, k);

        cout << "Array after shifting left by " << k << " positions: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
        cout << endl;

    return 0;
}
