#include <iostream>
using namespace std;

int main()
{

    bool a = true;
    bool b = false;
    cout << (a | b) << endl; //1
    bool c = false;
    bool d = false;
    cout << (c | d) << endl; //0
    bool e = true;
    bool f = true;
    cout << (e | f); //1
    
    
    
    
    return 0;
}