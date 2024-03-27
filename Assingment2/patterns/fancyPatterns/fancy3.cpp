// A 
// A B A 
// A B C B A
// A B C D C B A 
// A B C D E D C B A
 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int row = 0; row < n; row++){
        char ch;
        for(int col = 0; col < row + 1; col++){
            ch = col + 1 + 'A' -1;            
            cout <<  ch;
        }
        //jab tak A tak nahi pahachte tab tak print karenge
        for(char  alpha = ch; alpha > 'A' ;){
            alpha--;
            cout << alpha;
        }
        cout << endl;
    }
    
    
    
    
    return 0;
}