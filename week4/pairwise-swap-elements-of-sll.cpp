class Solution
{
public:
    Node *pairWiseSwap(struct Node *head)
    {
        // The task is to complete this method
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node *cur;
        cur = head;
        while (cur && cur->next)
        {
            long temp = cur->data;
            cur->data = cur->next->data;
            cur->next->data = temp;
            cur = cur->next->next;
        }

        return head;
    }
};