
#include <iostream>
#include <vector>

using namespace std;

// Node class represents a
// node in a linked list
class Node {
public:
    // Data stored in the node
    int data;   
    
    // Pointer to the next node in the list
    Node* next;      

    // Constructor with both data and
    // next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as a
    // parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to return the length 
// of loop using hashing

int lengthOfLoop(Node* head) {
   
    int cnt = 1;
    

    fast = fast->next;
    
    while(slow!=fast){
        
        // at each node increase
        // count by 1 and move fast
        // forward by one step
        cnt++;
        fast = fast->next;
    }
    
    return cnt;
}

// int lengthOfLoop(Node* head) {
//     Node* slow = head;
//     Node* fast = head;

//     // Step 1: Traverse the list to detect a loop
//     while (fast != nullptr && fast->next != nullptr) {
//         // Move slow one step
//         slow = slow->next;     
//         // Move fast two steps
//         fast = fast->next->next;

//         // Step 2: If the slow and fast pointers
//         // meet, there is a loop
//         if (slow == fast) {
//             // return the number of nodes
//             // in the loop
//             return findLength(slow, fast);
//         }
//     }

//     // Step 3: If the fast pointer
//     // reaches the end, there is no loop
//     return 0; 
// }


int lengthOfLoop(Node* head) {
   unordered_map<Node* ,int > nodemap;
   Node* temp = head; 
   int timer=0;
   while(temp!=nullptr){
    if(nodemap.find(temp) != nodemap.end()){
        int length = timer - nodemap[temp];
        return length;
    }
   nodemap[temp] = timer;
    temp=temp->next;
    timer++;
 }  
}



int main() {
    // Create a sample linked
    // list with a loop
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Create a loop from
    // fifth to second
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    // This creates a loop
    fifth->next = second; 

    int loopLength = lengthOfLoop(head);
    if (loopLength > 0) {
        cout << "Length of the loop: " << loopLength << endl;
    } else {
        cout << "No loop found in the linked list." << endl;
    }

    return 0;
}


