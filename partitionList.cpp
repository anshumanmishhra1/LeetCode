class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo = new ListNode(100);
        ListNode* hi = new ListNode(180);
        ListNode* temp = head;
        ListNode* tempLow = lo;
        ListNode* tempHigh = hi;

        while(temp!=NULL){
            if(temp->val<x){
                tempLow->next = temp;
                temp = temp->next;
                tempLow = tempLow->next;
            }
            else{
                tempHigh->next = temp;
                temp = temp->next;
                tempHigh = tempHigh->next;
            }
        }
        tempLow->next = hi->next;
        tempHigh->next = NULL;
        return lo->next;
    }
};