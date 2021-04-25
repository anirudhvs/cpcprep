Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *head, *cur;
    head = cur = NULL;
    while(head1 !=NULL && head2 != NULL){
        
        if(head1->data <= head2->data){
            
            if(head==NULL)
                head = cur = new Node(head1->data);
            
            else {
                cur->next = new Node(head1->data);
                cur = cur->next;
            }
            if(head1->data==head2->data){
                head2 = head2->next;
            }
            head1 = head1->next;
        }
        else {
            if(head==NULL)
                head = cur = new Node(head2->data);
            
            else {
                cur->next = new Node(head2->data);
                cur = cur->next;
            }
            head2 = head2->next;
        }

    }
    
    if(head1){
        cur->next = head1;
    }
    if(head2){
        cur->next = head2;
    }   
    return head;
    
}  