//find area of circle
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141;
double calculateAreaOfCircle(double radius){
    return PI * pow(radius,2);
}

void displayAreaOfCircle(double radius){
    double area = calculateAreaOfCircle(radius);
    cout <<  "The area of the circle with radius " << radius << " is: " << area << endl;
}


int main(){

    double radius;
    cout << "Eneter the radius : " << endl;
    cin >> radius;
    displayAreaOfCircle(radius);
}