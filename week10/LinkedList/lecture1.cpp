#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 


    Node() {
        cout <<"I am inside the def constructor" << endl;
        this->next = NULL;
    }

    Node(int data) {
        cout <<"I am inside the parameterized constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    //creation of node
    // Node a; //static objectc
    // Node* head = new Node(); // dynamic memory allocation
    Node* first = new Node(10);
    Node* secoand = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    

    first->next = secoand;
    secoand->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // linked list created 

    Node* head = first;
    cout << "Printing the entire LL" << endl;
    printLL(head);
    return 0;
}