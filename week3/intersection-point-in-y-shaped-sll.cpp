int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *p1, *p2;
    p1 = head1; 
    p2 = head2;
    
    int r1 = 0;
    int r2 = 0;
    
    while(p1!=p2){
        p1 = p1->next;
        p2 = p2->next;
        if(p1 == p2 ){
            return p1->data;
        }
        if(p1==NULL){
            p1 = head2;
            r1 = true;
        }
        if(p2==NULL){
            p2 = head1;
            r1= true;
        }
        if((p1==NULL && r1)|| (p2==NULL && r2)){
            return -1;
        }
        
    }
    return p1->data;
    
}