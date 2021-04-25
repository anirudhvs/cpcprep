class Solution
{
public:
    void linkdelete(struct Node *head, int M, int N)
    {
        //Add code here
        Node *cur = head;
        while (cur && M)
        {
            for (int i = 1; i < M; i++)
                cur = cur->next;
            int n = N;
            while (cur->next && n)
            {
                Node *temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
                n--;
            }
            M--;
            cur = cur->next;
        }
    }
};