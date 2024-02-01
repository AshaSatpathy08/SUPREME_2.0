#include <iostream>
using namespace std;

int findLastOccur(int arr[],int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start/2 + end/2;
    int ans = -1;

    for(int i = 0; i < n; i++){
        if(arr[mid] == target){
            ans = mid;
            start = mid++;
        }
        else if(target > arr[mid]){
            start = mid++;
        }
        else if(target < arr[mid]){
            end = mid--;
        }
        else{
            (start + end )/2;
        }
    }
    return ans;
}



int main()
{
    int arr[] = {10,20,30,40,40,40,40,50};
    int n = 8;
    int target = 40;

    int answerIndex = findLastOccur(arr,n,target);

    if(answerIndex == -1){
        cout << "Not found" << endl;
    }
    else{
        cout << "Found at this index: "  << answerIndex << endl;
    }
    return 0;
}