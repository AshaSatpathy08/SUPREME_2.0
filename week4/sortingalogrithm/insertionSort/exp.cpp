#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &v) {
    int n = v.size() ;
    // i = 0, chhod deta hun?
    for(int i = 1; i < n; i++){
        int key = v[i];
        int j = i-1;
        //move element of arr[0...i-1] that are greater than key  to the position ahead of there current positin
        while(j>=0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key; // insertion 
    }
}


int main()
{
    vector<int> v = {5,4,3,2,1};
    insertionSort(v);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}