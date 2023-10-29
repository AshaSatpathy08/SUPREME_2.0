/*
Pattern
N = 4
1
22
333
4444
*/
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i++){
//         for(j=1;j<n;j++){
// 	        cout<<i;
//         }
//     cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
