#include <iostream>
#include<vector>
using namespace std;

int main()
{
    // int arr[5];
    // vector<int> v(5, 901);

    // cout << "Size of vector : " << v.size();
    // cout<< endl << "printing vector" << endl;

    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // vector<int> arr;
    // cout << "Size of vector : " << arr.size();
    // vector <vector<int> > brr;
    // cout << "Size of vector : " << brr.size();
    // vector <vector < vector <int>>> crr;
    //insertion
    // arr.push_back(4);
    // arr.push_back(5);

    //2d array
    // vector< vector<int> > arr(5, vector<int>(10,0));
    // //row size -> arr.size()
    // for(int i = 0; i < arr.size(); i++){
    //     for(int j = 0; j < arr[i].size(); j++ ){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //jagged array

    vector< vector<int> >brr;
    vector<int> vect1(10,0);
    vector<int> vect2(8,1);
    vector<int> vect3(6,0);    
    vector<int> vect4(4,1);
    vector<int> vect5(2,0);


    brr.push_back(vect1);
    brr.push_back(vect2);
    brr.push_back(vect3);
    brr.push_back(vect4);
    brr.push_back(vect5);



    for(int i = 0; i < brr.size(); i++){
        for(int j = 0; j < brr[i].size(); j++ ){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}