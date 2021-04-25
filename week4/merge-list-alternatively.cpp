void mergeList(struct Node **p, struct Node **q)
{
    // Code here
    Node *l1;
    Node *l2;
    l1 = *p;
    l2 = *q;
    //cout<<"HERE"<<endl;
    while (l1 && l2)
    {
        Node *temp = l1->next;
        l1->next = new Node(l2->data);
        l1 = l1->next;
        l1->next = temp;
        l1 = l1->next;
        temp = l2;
        l2 = l2->next;
        delete l2;
    }
    *q = l2;
}