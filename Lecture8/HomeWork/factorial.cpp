<<<<<<< HEAD
//factorial
#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}






int main(){

    int n;
    cin>>n;

    int ans = fact(n);
    cout<<ans<<endl;


    return 0;
=======
//factorial
#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}






int main(){

    int n;
    cin>>n;

    int ans = fact(n);
    cout<<ans<<endl;


    return 0;
>>>>>>> ed3f21224c72337263fe16e505f752885af953ee
}