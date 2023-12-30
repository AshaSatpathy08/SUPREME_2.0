//move all negative number to the side of an array

#include<iostream>
using namespace std;

void  moveAllNegToLeft(int *arr, int n){
    //dutch national flag algo 
    int l = 0, h = n - 1;
    while(l < h){
        if(arr[l] < 0){  //-ve
            l++;   
        }
        else if(arr[h] > 0){  //+ve
            h--;
        }
        else{
            swap(arr[l], arr[h]);  //if left is +ve and right is -ve swap it
        }
    }
}

int main()
{
    int arr[] = {1,2,-3,4,-5,6};
    int n = sizeof(arr)/ sizeof(int);  //array ka size dega

    moveAllNegToLeft(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}