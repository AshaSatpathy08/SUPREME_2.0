#include <iostream>
using namespace std;


int findFirstOccurence(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1; 
    int mid = (s+e)/2; //overflow k chances hain isme
    int mid = s + (e-s)/2; //best practice
    // int mid = s/2 + e/2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == target){
            //ans store
            ans = mid;
            //left me jao
            e = mid - 1; 
        }
        else if(target > arr[mid]) {
            //right me jao
            s = mid + 1;
        }
        else if(target < arr[mid]) {
            //left me joa
            e = mid - 1;
        }
        // galti karte hain(mid ko upadate karna bhull jate hian)
        mid = (s+e)/2;
    }
    return ans;
}



int main()
{
    int arr[] = {10,20,30,30,30,40,50};
    int target = 80;
    int n = 7;
    int ansIndex = findFirstOccurence(arr, n , target);
        if(ansIndex == -1){
        cout << "Element not found " << endl;
        } 
        else{
            cout << " Element Found at Index: " << ansIndex << endl;
        }
    return 0;
}