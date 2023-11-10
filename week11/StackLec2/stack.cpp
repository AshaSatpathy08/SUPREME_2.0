#include <iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;


    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2-top1 == 1){
            // no space available
            cout << " Overflow " <<  endl;
        }
        else{
        top1++;
        arr[top1] = data;
        }
    
    }
    
    void push2(int data) {
        if(top2 - top1 == 1){
            // no space available
            cout << " Overflow " <<  endl;
        }
        else{
        top2--;
        arr[top2] = data;
        }

    }


    void pop1() {
        if(top1 == -1){
            //stack1 is empty
            cout << "Underflow" << endl;
        }
        else{
        arr[top1] = 0;
        top1--;
        }

    }
    void pop2() {
        if(top2 == size){
            cout << "Underflow" << endl;
        }
        else{
        arr[top2] = 0;
        top2++;
        }
    }

    void print() {
        cout << endl;
        cout  << "top1: " << top1 << endl;
        cout << "top2: " << top2 << endl;
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main()
{ 
    Stack st(6);
    st.print();

    st.push1(10) ;

    return 0;
}