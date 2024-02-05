#include <iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(s == e) { // single element 
        return s;
        }
        // mid check => even or odd 
        if(mid-1 >= 0 && mid & 1) { //mid & 1 = 1 => odd 
            if(arr[mid-1] == arr[mid]){
                //right++
                s = mid + 1;
            }
            else{
                // left ++ 
                e = mid - 1;
            }
        }   
        else{
            //even wala case
            if(mid+1 < n && arr[mid] == arr[mid+1]){
                //right me jao
                s = mid + 2; // bcoz mid + 1 already checck ho chuka hai;
            }
            else{
                // ya to right me khada hun ya fir answer k upar khada hun
                //uske liye e = mid kara hai bcoz e = mid - 1 se answer lost ho sakta hai;
                e =  mid;
            }
        } 
        mid = s + (e-s)/2;
    }
    return -1;
}



int main()
{
    int arr[] = {5,10,10,2,2,3,3,5,5,6,6,7,7};
    int n = 13;

    int answer = findOddOccuringElement(arr,n);

    cout << "final answer is: " << arr[answer] << endl;
    return 0;
}