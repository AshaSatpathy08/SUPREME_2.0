#include<iostream>
#include "assert.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    assert(n <= 9);

    for(int row = 0; row < n; row++){
        int start_num_index = 8 - row;
        int num = row + 1;
        int count_num = num;
        for(int col = 0; col < 17; col++){
            if(col == start_num_index && count_num > 0) {
                cout << num;
                start_num_index+=2;
                count_num--;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}


    // ********1********
    // *******2*2*******
    // ******3*3*3******
    // *****4*4*4*4*****
    // ****5*5*5*5*5****

