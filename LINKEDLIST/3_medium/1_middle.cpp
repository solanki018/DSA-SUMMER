#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// First approach: counting nodes
Node* findMiddle(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != nullptr) {
        temp = temp->next;
        count++;
    }

    int mid = count / 2;
    for (int i = 0; i < mid; i++) {
        head = head->next;
    }
    return head;
}

// Second approach: slow & fast pointer
Node* findMiddle1(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Using both methods:
    Node* middleNode1 = findMiddle(head);
    Node* middleNode2 = findMiddle1(head);

    cout << "Middle node (by count method): " << middleNode1->data << endl;
    cout << "Middle node (by slow-fast method): " << middleNode2->data << endl;

    return 0;
}
