//rectangle 
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n; //(for row)
    cin >> m; //(for col)
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++ ){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}