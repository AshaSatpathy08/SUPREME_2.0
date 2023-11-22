#include <iostream>
using namespace std;

void func(int a[], int n) {
    cout << "Array elements are" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}

int main() {
    // Static memory allocation
    // int staticArr[5] = {1, 2, 3, 4, 5};

    // Dynamic memory allocation
    int n;
    cin >> n;
    int* dynamicArr = new int[n]; // Each element would be 0 or garbage

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        dynamicArr[i] = data;
    }

    func(dynamicArr, n); // Pass the dynamic array to the function

    // Don't forget to release the dynamically allocated memory
    delete[] dynamicArr;

    return 0;
}
