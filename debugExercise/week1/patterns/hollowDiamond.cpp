#include <iostream>
using namespace std;

int main()
{   
    int num;
    cin >> num;
    
    int n = num / 2;

    for(int row = 0; row < n; row++){
        //space
        for(int col = 0; col < n - row -1; col++) {
            cout << " ";
        }
        for(int col = 0; col < row + 1; col++){
            // print star for first and last col
            if(col == 0|| col == row + 1 - 1 ) {
                 cout << "* ";
            }
            else{
                // for every col between first and last column, print space
                cout << "  ";
            }
            }
               cout << endl;
        }

         for(int row = 0; row < n; row++){
        //space
        for(int col = 0; col < row; col++){
            cout << " ";
        }
        //star
        int totalCol = n-row;
        for(int col = 0; col < totalCol; col++){
            if(col == 0 || col == totalCol-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    

    
    return 0;
}