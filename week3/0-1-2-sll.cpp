class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        long zero = 0, one = 0, two = 0;
        while(head){
            long d = head->data;
            switch(d){
                case 0: zero++; break;
                case 1: one++; break;
                case 2: two++; break;
            }
            head = head->next;
        }
        Node *ans = NULL;
        while(zero--){
            if(ans == NULL){
                ans = new Node(0);
                head = ans;
            }
            else{
                ans->next = new Node(0);
                ans = ans->next;
            }
        }
        while(one--){
            if(ans == NULL){
                ans = new Node(1);
                head = ans;
            }
            else{
                ans->next = new Node(1);
                ans = ans->next;
            }
        }
        while(two--){
            if(ans == NULL){
                ans = new Node(2);
                head = ans;
            }
            else{
                ans->next = new Node(2);
                ans = ans->next;
            }
        }
        
        return head;
    }
};