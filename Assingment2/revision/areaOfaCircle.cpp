#include <iostream>
using namespace std;

float areOfCircle(float radius) {
    float area = 3.14 * (radius * radius);
    return area;
}



int main()
{
    float radius;
    cin >> radius;
    float area  = areOfCircle( radius );
    cout << "Area of the circle is " << area << endl;
    return 0;
}