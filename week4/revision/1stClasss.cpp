#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int target) {
    int start = 0;
    int end = n - 1;
    int mid = start/2 + end/2;
    for(int i = 0; i <= n; i++){
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]) {
            // right++
            start = mid++;
        }
        else if(target < arr[mid]){
            //left++
            end = mid--;
        }
        else{
        // mid ko upadate karna na bhule
        mid = (start + end) / 2;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int target = 80;
    int n = 9;
    int answerWalaIndex = binarySearch(arr,n,target);

    if(answerWalaIndex == -1) {
        cout << "Element nahi mila" << endl;
    }
    else{
        cout << "element milgaya at Index: " << answerWalaIndex  << endl;
    }
    return 0;
}