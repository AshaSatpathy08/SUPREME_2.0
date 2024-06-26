#include <iostream>
using namespace std;


// visiting method
// void findMissing(int *a , int n){
//     for(int i = 0; i < n; i++ ){
//         int index = abs(a[i]);
//         if(a[index - 1] > 0){
//             a[index - 1] *= -1;
//         }
//     }
//     // for(int i = 0; i < n; i++){
//     //     cout << a[i] << " ";
//     // }

//     // all posiotive indexes are missing
//     for(int i = 0; i < n; i++){
//         if(a[i] > 0){
//             cout <<i+1 << " ";
//         }
//     }

// }

// int main()
// {
//     int n;
//     int a[] = {3,3,5,5,3};
//     n = sizeof(a)/sizeof(int);
//     findMissing(a,n);
//     return 0;
// }

//sorting + swapping method
void findMissing(int *a , int n){
    int i = 0;
    while (i < n){
        int index = a[i] - 1;
        if(a[i] != a[index]){
            swap(a[i], a[index]);  // jab "i" & "index" par values same ho jaye to loop ruk jaega
        }
        else{
            i++;
        }
    }
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    for(int i = 0; i < n; i++){
        if(a[i] != i + 1){
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}



int main()
{
    int n;
    int a[] = {1,3,4,5,3};
    n = sizeof(a)/sizeof(int);
    findMissing(a,n);
    return 0;
}