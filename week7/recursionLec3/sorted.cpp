#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index){
    //base case
    if(index >= size){
        return true;
    }

    //processing
    if(arr[index] > arr[index-1]){
        //age check karna padenga :)
        // recursion sambhalega
        bool ageKaAns = checkSorted(arr, size, index+1);
        return ageKaAns;
    }
    else{
        //sorted nahi hoti
        return false;
    }

}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index = 1;

    bool isSorted = checkSorted(arr, size, index);

    if(isSorted){
        cout << "Array is Sorted" << endl;
    }
    else{
        cout << "Array is Not soretd" << endl;
    }
    return 0;
}