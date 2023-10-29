/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<n){
//         int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int spaces = n - i;
        int stars = 2 * i - 1;

        // Print leading spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Print trailing spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}
