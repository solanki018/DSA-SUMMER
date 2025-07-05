#include <iostream>
using namespace std ;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    Node(int value){
        data=value;
        next= nullptr;
        back = nullptr;
    }
};
int main(){
     Node* First = new Node(10);
     Node* Second = new Node(20);
     Node* Third = new Node(30);

     First->next = Second;
     Second->next= Third;

      Second->back = First;
      Third->back = Second;

     cout << "Forward: ";
    Node* temp = First;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Print backward direction from last node
    cout << "\nBackward: ";
    temp = Third;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->back;
    }
}

