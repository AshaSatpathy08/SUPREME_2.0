#include <iostream>
#include<vector>
using namespace std;

// void print(vector<int>v){
//     cout << "printing vector: "<<endl;
//     int size = v.size();
//     for(int i = 0; i < size; i++){
//         cout << v[i] << endl;
//         // cout << v.at(i) << endl;
//     }
//     cout << endl;
// }


void print2(vector<int> v){
    cout << "printing vector method 2: "<<endl;
    for(auto it:v){
        cout << it << " ";
    }
    cout << endl;
}


// void func(int a[], int n) {
//     cout << "Array elements are" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << endl;
//     }
// }

int main() {
    // // Static memory allocation
    // // int staticArr[5] = {1, 2, 3, 4, 5};

    // // Dynamic memory allocation
    // int n;
    // cin >> n;
    // int* dynamicArr = new int[n]; // Each element would be 0 or garbage

    // for (int i = 0; i < n; i++) {
    //     int data;
    //     cin >> data;
    //     dynamicArr[i] = data;
    // }

    // func(dynamicArr, n); // Pass the dynamic array to the function

    // // Don't forget to release the dynamically allocated memory
    // delete[] dynamicArr;

    //creation
    // vector<int> v;

    // insertion
    // v.push_back(1);
    // v.push_back(2);

    // print(v);

    // vector<int> vect;
    // while (1)
    // {
    //     int d;
    //     cin >> d;
    //     vect.push_back(d);
    //     cout << "capacity: " << vect.capacity() << " , size: " << vect.size() << endl;
    // }
    

    // pop 
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);

    // v.pop_back();
    // v.pop_back();
    // print(v);


    // n size ki input 
//     vector<int> v;
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         int d;
//         cin >> d;
//         v.push_back(d);
//     }

//     // for(int i = 0; i < 5; i++){
//     //     v.push_back(80);
//     // }

//     print(v);

//     //i want to clear vector
//     v.clear();

//    print(v);


    //vector initialization
    // vector<int> arr; // default with no data and zero size
    // vector<int> arr2(5,-1); //init with n size with specific data
    // arr2.push_back(50);

    // vector<int>arr3 = {1,2,3,4,5};
    // arr3.pop_back();

    // print(arr3);
//--------*--------*-------*------------****----------
    // how to copy vector
    // vector<int> arr5 = {1,2,3,4,5};
    // vector<int> arr6(arr5);

    // print(arr6);


    // vector<char> v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');
    
    // // cout << "front element : " << v[0] << endl;
    // cout << "front element : " << v.front() << endl; // print first element
    // // cout << "last element: " << v[v.size()-1];
    //  cout << "last element : " << v.back() << endl; //last element

    ///--------------*---------------
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    print2(v);


    return 0;
}
