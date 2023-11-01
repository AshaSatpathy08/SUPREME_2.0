#include <iostream>
using namespace std;

class abc 
{
    public:
    int x;
    int *y;

    abc(int _x, int _y ) : x(_x), y(new int(_y)) {}

    //default dumb copy constructor : it does shallow copy
    // abc(const abc& obj){
    //     x = obj.x;
    //     y = obj.y;
    // }


    // deepcopy
    abc(const abc& obj){
        x = obj.x;
        y = new int(*obj.y) ;
    }


    void print() const 
    {
        printf("X:%d\nPTR Y:%p\nContent of Y (*Y):%d\n\n",x,y,*y);
    }

    ~abc()
    {
        delete y;
    }


};

int main()
{
    // abc a(1,2); 
    // cout << "Print int a\n"; //call hoto hai, copy constructor
    // a.print();

    // abc b = a;
    // cout << "Ptint int b\n";
    // b.print();
    // *b.y = 20;
    // cout << "Print int b\n";
    // b.print();

    // cout << "Print int a\n";
    // a.print();
    // return 0;


    abc *a = new abc(1,2);
    abc b = *a;
    delete a;
    b.print();
    return 0;


}
