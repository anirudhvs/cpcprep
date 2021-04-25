/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   Node *fast, *slow;
   slow = fast = head; 
   while(fast && fast->next){
       slow = slow->next;
       fast = fast->next->next;
   }
   if(head==NULL){
       return -1;
   }
   return slow->data;
}
