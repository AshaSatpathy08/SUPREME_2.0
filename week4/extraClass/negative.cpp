#include <iostream>
using namespace std;

void shiftNegativeOneSinde(int arr[],int n){
    int j = 0; 
    // j --> memory block --> jaha par mein negative number store karungi;
    for(int index = 0; index < n; index++){
        // index --> yaha par pure array ko traverse karega;
        if(arr[index] < 0){
            swap(arr[index], arr[j]);
            j++;
        } //yaha par index++ karne ki need nahi hai kyun ki humne loop k andar index++ kiya hua hai;
        
    }
}



int main()
{
    int arr[] = {23 ,-7,12,-10,11,40,60};
    int n = 7;

    shiftNegativeOneSinde(arr,n);

    //print
    cout << " printing the array" << endl;
    for(int i = 0; i <  n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

