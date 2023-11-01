#include <iostream>
using namespace std;

class abc{
    int x;
    int *y;
    public:
    abc(){
        x = 0;
        y = new int(0);
    }

    int getX() const
    {
        return x;   
    }
    int setX(int _val)
    {
        x = _val;
    }

    int getY() const
    {
        return *y;
    }
    void setY(int _val){
        *y = _val;
    }
};


int main()
{   
    abc a;
    cout << a.getX() << endl;
    cout << a.getY() << endl; 
    return 0;
}