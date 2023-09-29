#include <iostream>
using namespace std;

int main()
{
    // // creation
    // string name;

    // // input
    // // cin >> name;
    // getline(cin,name);

    // //print 
    // cout << name << endl;    
    // cout << " printing first caharacter: " <<name[0] << endl;

    // int index = 0;
    // while(name[index] != '\0'){
    //     cout << "index : " << index << "character : " << name[index] << endl;
    //     index++;
    // }


    // cout << "printing index 6 value :" << name[6] << endl;
    // int value   = (int) name[6];

    // cout <<  "value: " << value << endl;

    string name;
    cin >> name;
    string temp = "";
    cout << "length of string " << name.length() << endl;
    cout << " string is empty or not " << temp.empty() << endl;
    cout << name.at(0) << endl;
    return 0;
}