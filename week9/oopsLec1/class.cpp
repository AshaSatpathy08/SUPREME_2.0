#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
    // double a;
    // double c;
    // char b;
    // bool d;
private:
    string gf;

public:    
    int id;
    int age;
    string name;
    int nos;
    bool present;

    //ctor : default ctor
    // no khokla student (s1) ban paega
    // Student() 
    // {
    //     cout << "Student ctor called " << endl;
    // }

    //parameterized ctor
    // Student(string _name,int _id,int _age,int _nos,bool _present, string _gf) 
    // {
    //     name = _name;
    //     id = _id;
    //     age = _age;
    //     nos = _nos;
    //     present = _present;
    //     gf = _gf;
    //     cout << "Student paremeterized ctor called " << endl;
    // }
        // same as parameterized ctor .yaha pe this keyword use hoga bas
        Student(string name,int id,int age,int nos,bool present, string gf) 
    {
        this->name = name;
        this->id = id;
        this->age = age;
        this->nos = nos;
        this->present = present;
        this->gf = gf;
        cout << "Student paremeterized ctor called " << endl;
    }
    Student( string name,int id,int age,int nos,bool present ) 
    {
        this->name = name;
        this->id = id;
        this->age = age;
        this->nos = nos;
        this->present = present;
     
        cout << "Student paremeterized ctor with out gfcalled " << endl;
    }


    void play() 
        {
        cout << "Playing" << endl;
        }
    void study()
        {
         cout << "Studying" << endl;
        }
private:
    void gfchatting()
    {
        cout << "chatting" << endl;
    }

};

int main()
{
    // Student s1;
    // cout << s1.age << endl;

    Student s2("Ashu",12,1,7,1);
    cout << s2.age <<endl;
    cout << s2.id <<endl;
    cout << s2.name <<endl; 

    Student s3("nobita",15,1,8,0);
    cout << s3.name << endl;

    Student *s4 = new Student("kimon",5,3,8,1);
    cout << s4->name << endl;
    cout << (*s4).name << endl;

    delete s4; //no leak

    // s1.name = "Ashu";
    // s1.age = 12;
    // s1.id = 1;
    // s1.nos = 7;
    // s1.present = 1;

    // Student s2;
    // s2.name = "AshA";
    // s2.age = 11;
    // s2.id = 1;
    // s2.nos = 1;
    // s2.present = 1;
    // cout << sizeof (Student) << endl;
    return 0;
}