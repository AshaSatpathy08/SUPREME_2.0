#include <iostream>
using namespace std;
void shiftLeftByK(int arr[], int size, int k) {
    // Create an array to store the first k elements
    int temp[k];
    for (int i = 0; i < k; ++i) {
        temp[i] = arr[i];
    }
    
    // Shift elements to the left by k positions
    for (int i = 0; i < size - k; ++i) {
        arr[i] = arr[i + k];
    }
    
    // Assign the stored elements to the end of the array
    for (int i = 0; i < k; ++i) {
        arr[size - k + i] = temp[i];
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
