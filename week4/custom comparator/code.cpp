#include<algorithm>
#include <iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}


void printVv(vector<vector<int>> &v){
    for(int i = 0; i < v.size(); i++){
        vector<int>&temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
    cout << endl;
}

// bool mycomp(int &a, int &b){
//     // return a < b; //increasing order me sort karega
//     return a > b; //decreasing order me sort karega
// }


bool mycompfor1stIndex(vector<int>&a, vector<int>&b){
    // return a[0] < b[0] ;
    // return a[1] < b[1] ; //increasing order
    return a[1] > b[1] ; //decreasing order
}


int main()
{
    // vector<int>v = {44,55,22,11,33};
    // // sort(v.begin(),v.end()); ye to increasing order me hua hai
    // sort(v.begin(),v.end(), mycomp);
    // print(v);

    // ||------------vector of vector-----------||
    vector<vector<int>>v;
    int n;
    cout << "Enter size: " << endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cout << "enter a, b" << endl;
        cin  >> a >> b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout << "here are the values: " << endl;
    printVv(v);
    cout << " Sorted by 1st index" << endl;
    sort(v.begin(),v.end(),mycompfor1stIndex);
    printVv(v);
    return 0;
}