#include <iostream>
using namespace std;

int main()
{
    // const int x = 5; // x is constant
    //intialization can be done
    //but we cant re-assign the value
    // int x = 19;

    // int *p = &x;
    // *p = 10;
    // cout << x << endl;     

    // const with pointer

    // int *a = new int(2); //const data, non- const pointer
    // int const *a = new int(2);//same as line number 17
    // cout << *a << endl;
    // // *a = 20; // cant change the content of pointer;
    // // cout << a << endl;
    // int b = 20;
    // a = &b; //pointer itself can be reassigned;
    // cout << *a << endl;

    // *a = 2;
    // cout << *a << endl;
    // int b = 5;
    // a = &b;
    // cout << *a << endl;


    //const pointer, but NON constant data;
    // int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20; //ye chal jaega
    // cout << *a << endl;
    // int b = 50;
    // a = &b; // nahi chalega, const pointer
    
    //const pointer ,, const data
    const int *const a = new int(10);
    cout << *a << endl;
    // *a = 50;
    int b = 100;
    // a = &b;    
    return 0;
}