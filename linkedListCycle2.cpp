class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        //first check whether there is loop or not:
        ListNode* fast = head;
        ListNode* slow = head;
        bool flag = false;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                flag = true;
                break;
            }
        }
        if(flag==false) return NULL;
        else{
            ListNode* temp = head;
            while(temp!=slow){
                temp = temp->next;
                slow = slow ->next;
            }
        }
        return slow;
    }
};