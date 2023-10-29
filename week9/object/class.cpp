// Defining Class and Declaring Objects
// A class is defined in C++ using the keyword class followed by the name of the class. 
// The body of the class is defined inside the curly brackets and terminated by a semicolon 
// at the end.

// C++ Program to show the syntax/working of Objects as a
// part of Object Oriented PProgramming

#include <iostream>
using namespace std;

class person {     // accese specifier     //can be private , public or protected
	char name[20]; //data members  variables to be used
	int id;

public:
	void getdetails() {} // methods to accesse data members
};  // class name ends with a ; 

int main()
{

	person p1; // p1 is a object
	return 0;
}




