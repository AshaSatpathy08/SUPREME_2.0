#include <iostream>
using namespace std;

int main()
{
    // cout << "hello world" << endl;

    // int marks = 98;

    // integer 
    int num ; // declaration
    int number = 50; // initialization
    cout << sizeof(number) <<endl;
    cout << endl;

    // character --> 1 __BYTE 
    char ch = 'k' ;
    cout << ch << endl;
    cout << sizeof(ch) << endl;


    //float -- 4byte
    float floating_number = 1.2 ;
    cout << floating_number << endl;
    cout << sizeof(floating_number) << endl; 


    // long  -- 4byte in 32bit 8byte in 64bit
    long nums;
    cout << sizeof(nums) << endl;




    return 0;
}