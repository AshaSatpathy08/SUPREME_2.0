#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(row == 0||row == n-1 || col == 0 || col == m-1) {
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