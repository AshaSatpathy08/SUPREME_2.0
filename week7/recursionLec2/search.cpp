#include <iostream>
using namespace std;

bool searchArray(int arr[], int size, int target, int index){
    //base case
    if(index >= size){
        return false;
    }
    if(arr[index] == target){
        return true;
    }

    //recursive call
    bool ageKaAns = searchArray(arr,size,target, index+1);
    return ageKaAns;


}   

int main()
{
    int arr[] = {10,20,30, 40, 50};
    int size = 5;
    int index = 0;
    int target = 500;
    cout << "target found or not: " << searchArray(arr, size, target, index) << endl;
    return 0;
}