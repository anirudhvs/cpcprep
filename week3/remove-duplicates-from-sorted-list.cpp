class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode *cur, *next;
        cur = head;
        next = head->next;
        while(next){
            if(cur->val==next->val){
                while(next->next!=NULL && next->val==cur->val)
                    next = next->next;
                if(next->val==cur->val){
                    cur->next = NULL;
                    return head;
                }
                else 
                    cur->next = next;
            }
            cur = next;
            next = cur->next; 
        }
        return head;
    }
};