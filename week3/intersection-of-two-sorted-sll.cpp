Node* insNext(Node* n, int d){
    Node *temp =  new Node(d);
    if(n==NULL){
        return temp;
    }
    else {
        n->next=  temp;
        return n;
    }
}

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* ans = NULL;
    Node* anshead = NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data == head2->data){
            if(ans==NULL){
                anshead = ans = insNext(ans, head1->data);
            } else {
                ans = insNext(ans, head1->data);
                ans = ans->next;
            }
            
            head1 = head1->next;
            head2 = head2->next;
        }
        else if(head1->data > head2->data){
            head2 = head2->next;
        }
        else {
            head1 = head1->next;
        }
    }
    return anshead;
}