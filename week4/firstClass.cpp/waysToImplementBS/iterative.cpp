#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target){
    while(s <= e){
        int mid = s + (e - s)/2;

        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}




int main(void)
{
    int arr[] = {2,3,4,5,10,20,50};
    int n = 7;
    int target = 50;
    int result = binarySearch(arr,0, n - 1, target);
    (result == -1)
    ? cout << " Element is not present in array"
    : cout << "Element is present  at index: " << result;  
    return 0;
}