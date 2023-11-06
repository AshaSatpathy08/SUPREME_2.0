#include <iostream>
using namespace std;

int main()
{
// int arr[100]    ;
// char ch[10];
// bool flags[120];
// long num[1000];
// double n[1000];
// short snum[1000];

// cout << " Array created Successfully" << endl;

// int arr = 12;
// cout << "size of arr: "<< sizeof(arr) << endl;
// cout << " Address of arr is: " << &arr << endl;

// int brr[10];
// cout << "size of arr: "<< sizeof(brr) << endl;
// cout << " base address of brr is: " << &brr << endl;

///----------initialization -------//
// int arr[] = {1,2,3,4,5,6};
// int brr[10] = {2,1,2,3,4,5,56,78,9,1};
// int crr[5] = {1,2};
// int drr[1] = {1,2}; gives error

// indexing
// int arr[5] = {1,3,4,5,6};
// cout << arr[0] << endl;
// cout << arr[1] << endl;
// cout << arr[2] << endl;
// cout << arr[3] << endl;
// cout << arr[4] << endl;

// int n = 5;
// for(int i = 0; i < n; i++){
//     cout << arr[i] << " " ;
// }


// ----------------- Takiung an input in an array ---------//
// int arr[5];
// int n = 5;
//  for(int i = 0; i < n; i++){
//     cout << "enter the value of index"<< i << ": ";
//     cin >> arr[i];
//     cout << endl;
//  }
// cout <<"printing the array "<< endl;
// for(int i = 0; i < n; i++){
//     cout << arr[i] << " " ;
// }



// problemStatement1
// int arr[10];
// int n = 10;
// for(int i = 0; i < n; i++){
//     cin >> arr[i];
// }
// for(int i = 0; i < n; i++){
//     cout << arr[i]*2 << " ";
// }

// problemStatemant2
// int arr[5];
// int n = 5;
// cout << " Enetr input" << endl;
// for(int i = 0; i < n; i++){
//     cin >> arr[i];
// }
// int sum = 0;
// for(int i = 0; i < n; i++){
//     sum = sum + arr[i]; 
// }
//  cout << " Printing sum " << sum << endl;


//Linear Search in an array

int arr[5] = {2,3,4,6,8};
int n = 5;
int target = 60;
bool flag = 0;
for(int i = 0; i <n; i++){
    if (arr[i] == target)
    {
        flag = 1;
        // cout << "target found" << endl;
        break;
    }
}
if(flag == 1){
     cout << "target found" << endl;
}
else{
     cout << "target Not found" << endl;
}



return 0;
} 