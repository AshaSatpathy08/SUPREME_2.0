#include <iostream>
#include<string.h>
using namespace std;

int findLength( char ch[], int size ){
    int len = 0;
    int index = 0;
    while(ch[index] != '\0'){
        index++;
    } 
    return index;
}


void reverseString(char ch[], int n) {
    int i = 0;
    int j = n - 1;
    while(i <= j){
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}


int main()
{
    char ch[100];
    cin >> ch;
    cout << "Before : " << ch << endl;
    int length = findLength(ch,100);
    reverseString(ch,length);
    // cout << "reversing a string using stl: " <<  reverse(ch,length); 
    cout << "After :  " << ch << endl;

    return 0;
}