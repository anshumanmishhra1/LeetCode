class Solution {
public:
    ListNode* reverseList(ListNode* head) {

    ListNode* n = NULL; //here n is next i change the name as next is predefined in the list
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr!=NULL){
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;        
    }
};