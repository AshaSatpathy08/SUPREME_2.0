#include <iostream>
using namespace std;

int main()
{
    // //creation
    // char ch[100];
    // // input
    // cin >> ch;
    // // print
    // cout << "Printing the value of ch : " << ch << endl;

    //printing using loop
    // for(int i = 0; i < 10; i++){
    //     cout << "At index : " << i << " " <<  ch[i] << endl;
    // }
    
    // char temp = ch[6];
    // int value = (int)temp;
    // cout << "printing integer value : " << value << endl;

    char ch[100];
    cin.getline(ch,100);
    cout << "Printing the value of ch : " << ch << endl;
    return 0;
}