/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *fast;
       Node *slow;
       fast = slow = head;
       for(long i=0; i<n; i++){
           fast = fast->next;
           if(fast == NULL){
               return -1;
           }
       }
       while(fast!=NULL){
           slow = slow->next;
           fast = fast->next;
       }
       return slow->data;
}