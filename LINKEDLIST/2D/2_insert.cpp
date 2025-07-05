#include <iostream>
#include <vector>

using namespace std;

// Define a Node class for doubly linked list
class Node {
public:
    int data; 
    Node* next;
    Node* back;
    Node(int value){
        int data = value;
        next= nullptr;
        back=nullptr;
    }
};

// Function to convert an array to a doubly linked list
Node* convertArr2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        prev->next= temp ;
        prev= temp;
    }
  return head;
}

// Function to print the elements of the doubly linked list
void print(Node* head) {
    while(head!=nullptr){
        cout<<head->data<<" "<<endl;
        head= head->next;
    }
    
}

 
// Function to insert a new node with value 'k' at the end of the doubly linked list
Node* insertAtTail(Node* head, int k) {
    Node* newNode = new Node(k);

    if(head==nullptr){
        return nullptr;
    }
    Node* tail= head;
    while(tail->next != nullptr){
        tail=tail->next;
    }
    tail->next=newNode;
    newNode->back=tail;


}



int main() {
    vector<int> arr = {12, 5, 8, 7, 4};
    Node* head = convertArr2DLL(arr);

cout << "Doubly Linked List Initially: " << endl;
    print(head);


    cout << endl << "Doubly Linked List After Inserting at the tail with value 10: " << endl;
     // Insert a node with value 10 at the end
    head = insertAtTail(head, 10);
    print(head);

    return 0;
}