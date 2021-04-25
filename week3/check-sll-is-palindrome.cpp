bool solve(Node **left, Node *right){
    if(right==NULL){
        return true;
    }
    if(!solve(left, right->next)){
        return false;
    }
    bool temp = ((*left)->data == right->data)? true: false;

    (*left) = (*left)->next;
    return temp;
}


class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        return solve(&head, head);
    }
};