#include <iostream>
using namespace std ;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next= nullptr;
    }
};
int main(){
     Node* First = new Node(10);
     Node* Second = new Node(20);
     Node* Third = new Node(30);

     First->next = Second;
     Second->next= Third;

     Node* temp= First;
     while(temp!=nullptr){
        cout<<temp->next<<endl;
        temp=temp->next;
     }
}

