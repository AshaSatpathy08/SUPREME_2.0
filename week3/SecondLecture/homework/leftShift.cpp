#include <iostream>
using namespace std;


void  shiftLeft( int arr[], int size){
    if(size<= 1){
        return;
    }
    else{
        int firstElement = arr[0];
        for(int i = 0; i < size - 1; i++){
            arr[i] = arr[i+1];
        }
        arr[size - 1] = firstElement;
    }
}

int main()
{

    int arr[] = {10,20,30,40,50,60};
    int size = 6;

    //printing original array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }

    cout << endl;

    shiftLeft(arr, size);

    cout << "after left shift" << endl;

    for(int i = 0; i < size; i++){  
        cout << arr[i] << " " ;
    
    }



    return 0;
}