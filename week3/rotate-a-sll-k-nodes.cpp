class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* end = head;
        for(long i=0; i<k-1; i++){
            end = end->next;
        }
        if(end->next==NULL || k==0){
            return head;
        }
        Node *newhead = end->next;
        Node *newhead1 = end->next;
        end->next = NULL;
        while(newhead->next!=NULL){
            newhead = newhead->next;
        }
        newhead->next = head;
        return newhead1;
    }
};