class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *cur, *es, *ee, *os, *oe;
        cur = head;
        es = ee  = os = oe = NULL;
        while(cur){
            if( (cur->data)&1 ){
                if(os==NULL){
                    os = oe = cur;
                }
                else {
                    oe->next = cur;
                    oe = oe->next;
                }
            }
            else {
                if(es==NULL){
                    es = ee = cur;
                }
                else {
                    ee->next = cur;
                    ee = ee->next;
                }
            }
            cur = cur->next;
        }
        if(oe)
        oe->next = NULL;
        if(ee)
        ee->next = os;
        return es ? es : os;
    }
};