#include <iostream>
using namespace std;

int findFirstOccu(int arr[],int n,int target) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    
    for(int i = 0; i < n; i++) {
        if(arr[mid] == target) {
            // store the answer 
            ans = mid;
            // right ++
            end = mid--;
        }
        else if(arr[mid] > target) {
            start = mid++;
        }
        else if(arr[mid] < target) {
            end = mid--;
        }
        else{
            mid = (start + end)/2;
        }
    }
    return ans;
}

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




int findTotalOccur(int arr[], int n, int target){
    int FirstOccurence = findFirstOccu(arr,n,target);
    int LastOccurence = findLastOccur(arr,n,target);
    int TotalOccurence = LastOccurence - FirstOccurence + 1;
    return TotalOccurence;
}




int main()
{
    int arr[] = {10,20,30,40,80,80,80,80,80,90};
    int target = 80;
    int n = 10;
    int ans = findTotalOccur(arr,n,target);
    cout << "Total occurence is: " << ans << endl;
    return 0;
}