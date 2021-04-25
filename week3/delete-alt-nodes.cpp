void deleteAlt(struct Node *head){
    // Code here
    if(head==NULL){
        return;
    }
    Node *prev, *cur;
    prev = head;
    cur = head->next;
    while(prev && cur){
        prev->next = cur->next;
        delete cur;
        prev = prev->next;
        if(prev)
        cur = prev->next;
        
    }
}