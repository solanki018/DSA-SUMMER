
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data1)
    {
        val = data1;
        next = nullptr;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};


class Solution {
public:
    ListNode* LastNode(ListNode* &head) {
        if(head == nullptr || head -> next == nullptr){
            delete head;
            return nullptr;
        }
        ListNode* temp = head;
        while(temp->next->next!=nullptr){
                temp=temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        return head;

    }
};