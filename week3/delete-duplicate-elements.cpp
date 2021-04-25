class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *prev, *cur  , *next ;
        prev = NULL;
        cur = head;
        next = head->next;
        while(next){
            if(cur->val == next->val){
                while(next && next->val==cur->val){
                    next = next->next;
                }
                if(prev==NULL){
                    head = next;
                }
                else {
                    prev->next = next;
                }
                cur = next;
                if(next)
                next = next->next;  
            }
            else {
                prev = cur;
                cur = next;
                if(next)
                next = next->next;   
            }
        }
        
        
        return head;
    }
};