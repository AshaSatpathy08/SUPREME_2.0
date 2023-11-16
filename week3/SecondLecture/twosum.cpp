#include <iostream>
using namespace std;

void printPairsWithSum(int arr[], int n, int targetSum) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == targetSum) {
               cout << "Pair with sum " << targetSum << ": (" << arr[i] << ", " << arr[j] << ")\n";
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int targetSum = 8;

    printPairsWithSum(arr, n, targetSum);

    return 0;
}
