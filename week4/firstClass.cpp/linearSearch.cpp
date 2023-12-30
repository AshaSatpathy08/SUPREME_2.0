#include <iostream>
using namespace std;

bool foundTarget(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int target = 4;
    cout << foundTarget(arr,n,target);
    return 0;
}