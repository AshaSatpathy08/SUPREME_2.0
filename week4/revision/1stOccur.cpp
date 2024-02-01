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

int main()
{
    int arr[] = {10,20,30,40,50,50,50,70,80};
    int n = 9;
    int target = 50;
    
    int answerIndex = findFirstOccu(arr, n, target);

    if(answerIndex == -1){
        cout << "Element nahi mila" << endl;
    }
    else {
        cout << "Element milgaya at Index: " << answerIndex <<endl;
    }
    return 0;
}