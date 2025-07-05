#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data; 
    Node* next;
    Node* back;

    Node(int value) {
        data = value;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev; // ✅ important!
        prev = temp;
    }
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* deleteHead(Node* head) {
    if (!head) return nullptr;
    Node* temp = head->next;
    if (temp != nullptr)
        temp->back = nullptr;
    head->next = nullptr;
    delete head;
    return temp;
}

Node* deleteTail(Node* head) {
    if (!head) return nullptr;

    if (!head->next) { // Only one node
        delete head;
        return nullptr;
    }

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    Node* newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    delete tail;

    return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    
    cout << "Original Doubly Linked List: ";
    print(head);
    
    cout << "After deleting the tail node: ";
    head = deleteTail(head);
    print(head);

    cout << "After deleting the head node: ";
    head = deleteHead(head);
    print(head);

    return 0;
}
