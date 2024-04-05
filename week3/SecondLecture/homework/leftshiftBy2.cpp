#include <iostream>
using namespace std;
void shiftLeftByTwo(int arr[], int size) {
    // Store the first two elements
    int first = arr[0];
    int second = arr[1];
    
    // Shift elements to the left by 2 positions
    for (int i = 0; i < size - 2; ++i) {
        arr[i] = arr[i + 2];
    }
    
    // Assign the first two elements to the last two positions
    arr[size - 2] = first;
    arr[size - 1] = second;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        cout << "Original array: ";
            cout << arr[i] << " ";
    }
        cout << endl;

    shiftLeftByTwo(arr, size);

        cout << "Array after shifting left by 2: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
        cout << endl;

    return 0;
}
