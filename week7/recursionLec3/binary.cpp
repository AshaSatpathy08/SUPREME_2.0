#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target){
    //base case
    if(s > e){
        //element not found
        return -1;
    }
    //processing 
    int mid = s + (e-s)/2;
    if(arr[mid] == target){
        return mid; 
    }
    if(arr[mid] < target){
        //right++
        return binarySearch(arr,mid + 1,e, target);
        
    }
    else{
        //left++
        return binarySearch(arr, mid - 1,e, target);
    }

}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end = size - 1;
    int target = 100;
    
    int foundIndex = binarySearch(arr,start,end, target);

    if(foundIndex != -1) {
        cout << "target found at " << foundIndex << endl;
    }
    else{
        cout << " target not found" << endl;
    }

    return 0;
}