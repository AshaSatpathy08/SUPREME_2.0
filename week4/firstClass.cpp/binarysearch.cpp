#include <iostream>
using namespace std;

int bianrySearch(int arr[], int n, int target){
    int start = 0;
    int end = n - 1;
    int mid = (start+end)/2; //galti

    while(start <= end) {
        //found
        if(arr[mid] == target){
            //return index of the found element
            return mid;
        }
        else if(target > arr[mid]){
            //right me jao
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        // mid ko upadate karna na bhule
        mid = (start + end) / 2;
    }
    // agar element na mila to
    return -1;

}


int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int target = 90;
    int n = 9;

    int asnIndex  = bianrySearch(arr, n, target);
    
    if(asnIndex == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << " Element found at Index: " << asnIndex << endl;
    }
    
    return 0;
}