class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
    
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;
        
        while(fast != NULL and fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        return head;
    }
};