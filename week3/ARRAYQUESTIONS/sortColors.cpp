// sort 0 1 & 2

#include <iostream>
using namespace std;

void sortColor(int arr[], int n) {
    int index = 0;
    int left = 0;
    int right = n - 1;

    while(index <= right){
        if(arr[index] == 0){
            swap(arr[index],arr[left]);
            left++;
            index++;
        }
        else if(arr[index] == 2){
            swap(arr[index],arr[right]);
            right--;
        }
        else {
            index++;
        }
    }


}



int main()
{
    int arr[] = {0,1,0,2,0,1,1,1,0,0,2,2};
    int n = 12;
    sortColor(arr,n);  
    cout << "Sorted array: ";
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;  
    return 0;
}