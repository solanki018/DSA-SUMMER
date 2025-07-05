#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;
    public:
    ListNode(int data1, ListNode* next1) {
        data = data1;
        next = next1;
    }
    public:
   ListNode(int data1) {
        data = data1;
        next = nullptr;
    }
};

class Solution {
public:
    bool searchKey(ListNode* head, int key) {
        ListNode* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                return true; // key found
            }
            temp = temp->next;
        }
        return false; // key not found
    }
};
