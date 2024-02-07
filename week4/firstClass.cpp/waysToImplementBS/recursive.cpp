#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target){
    if(s <= e){
        int mid = s + (e - s)/2;
        // If the element is present at the middle
        // itself
        if(arr[mid] == target){
            return mid;
        }
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if(arr[mid] > target)
            return binarySearch(arr, s, mid -1, target);
        // Else the element can only be present
        // in right subarray
            return binarySearch(arr, mid + 1, e, target);
    }
    return -1;
}


int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int target = 10;
    int n = 5;
    int result = binarySearch(arr, 0, n - 1, target);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}