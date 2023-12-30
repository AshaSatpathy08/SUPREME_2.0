#include <iostream>
using namespace std;


void sortZerosAndOne(int nums[],int n){
    int index = 0;
    int left = 0;
    int right = n-1;

    while(index <= right) {
        if(nums[index] == 0){
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index] == 2){
            swap(nums[index], nums[right]);
            right--;
            //catch --> no need of index++
            // index++
        }
        else{
            index++;    
        }
        
    }
}


int main()
{
    int nums[]= {1,0,2,2,1,0,1,0};
    int n = 8;    

    sortZerosAndOne(nums,n);

    cout << "Printing the array" << endl;
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}