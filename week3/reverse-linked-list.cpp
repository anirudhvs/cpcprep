class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *current;
        Node *next;
        current = head;
        next = current->next;
        
        current->next = NULL;
        while(next){
            Node *temp = next->next;
            next->next = current;
            current = next;
            next = temp;
        }
        return current;
    }
    
};