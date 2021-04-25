class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method //
        if(head==NULL){
            return NULL;
        }
        node *cur, *next;
        cur = head;
        next = head->next;
        
        long i = 0;
        while(next!=NULL &&  i<k-1){
            node *temp = next->next;
            next->next = cur;
            cur = next;
            next = temp;
            i++;
        }
        
        head->next = reverse(next, k);
        return cur;
    }
};