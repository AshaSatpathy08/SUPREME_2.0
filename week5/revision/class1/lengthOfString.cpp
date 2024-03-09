#include <iostream>
#include<string.h>
using namespace std;

// int findLength( char ch[], int size ){
//     int len = 0;
//     for(int i = 0; i < size; i++) {
//         if(ch[i] == '\0'){
//             //stop
//             break;
//         }
//         else{
//             len++;
//         }
//     }
//     return len;
// }

int findLength( char ch[], int size ){
    int len = 0;
    int index = 0;
    while(ch[index] != '\0'){
        index++;
    } 
    return index;
}






int main()
{
    char ch[100];
    cin >> ch;
    // cin.getline(ch,100); //spaces bhi count honge;
    int length = findLength(ch,100);

    cout << "Length of string is : " << length << endl;
    cout << "Length of string is : " << strlen(ch) << endl;
    return 0;
}