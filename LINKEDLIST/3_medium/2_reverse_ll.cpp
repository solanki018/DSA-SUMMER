struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev=nullptr;
//         ListNode* curr =head;
//         while(curr!=nullptr){
//             ListNode* nextNode= curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextNode;
//         }
//         return prev ;
//     }
// };


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Base case: if head is null or only one node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Recurse on the rest of the list
        ListNode* newHead = reverseList(head->next);

        // Reverse the pointers
        head->next->next = head;
        head->next = nullptr;

        return newHead;
    }
};