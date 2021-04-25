bool isVowel(char c){
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return 1;
    }
    return 0;
}
struct Node* arrange(Node *head)
{
   //Code here
   Node *cur, *es, *ee, *os, *oe;
        cur = head;
        es = ee  = os = oe = NULL;
        while(cur){
            if( !isVowel(cur->data) ){
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