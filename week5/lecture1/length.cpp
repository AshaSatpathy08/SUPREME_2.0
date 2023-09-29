#include <iostream>
#include<string.h>
using namespace std;

int findLength(char ch[] , int size) { //array pass karo to uska size bhi karna

  
  int index = 0;
  while(ch[index] != '\0') {
    index++;
  }
  return index;

//     int len = 0;
//     for(int i = 0; i < size; i++){
//         if(ch[i] == '\0') {
//             //stop beta ji
//             break;
//         }
//         else{
//             len++;
//         }
//     }

//     return len  ;
} 


int main()
{
    char ch[100];

    cin >> ch;
    // cin.getline(ch,100);

    int length = findLength(ch,100);
    cout << "Length of string is : " << length <<  endl;
    cout << " printing length : " << strlen(ch) << endl;
    return 0;
}