<<<<<<< HEAD
#include<iostream>
#include<cmath>
using namespace std;

float circleArea(double radius){
 int area =  3.14 * pow(radius,2);

 return area ;
}

int main() {
    float radius;
    cout << "Enter the Radius of the circle: ";
    cin >> radius;

    float area = circleArea(radius);
    cout << "The area of the circle is: " <<area << endl;

    return 0;
=======
#include<iostream>
#include<cmath>
using namespace std;

float circleArea(double radius){
 int area =  3.14 * pow(radius,2);

 return area ;
}

int main() {
    float radius;
    cout << "Enter the Radius of the circle: ";
    cin >> radius;

    float area = circleArea(radius);
    cout << "The area of the circle is: " <<area << endl;

    return 0;
>>>>>>> ed3f21224c72337263fe16e505f752885af953ee
}