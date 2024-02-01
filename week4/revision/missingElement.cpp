#include <iostream>
using namespace std;


int findMissingNumber(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    for(int i = 0; i < n; i++){
        int diff = arr[mid] - mid;

        if(diff == 1){
            //right++
            s = mid = 1;
        }
        else{
            // answer ko store karlo
            ans = mid;
            // left++
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    //last element k liye
    if(ans +1 == 0)
    return n + 1;
    return ans + 1;
}


int main()
{
    int arr[] = {2,3,4,5,6,7,8,9};
    int n = 8;

    cout << findMissingNumber(arr,n);
    return 0;
}