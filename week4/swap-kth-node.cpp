Node *swapkthnode(Node *head, int num, int K)
{
    // Your Code here
    if (K > num || 2 * K - 1 == num)
    {
        return head;
    }
    Node *xp, *x, *yp, *y;

    xp = NULL;
    x = head;

    for (int i = 1; i < K; i++)
    {
        xp = x;
        x = x->next;
    }

    yp = NULL;
    y = head;
    for (int i = 1; i < num - K + 1; i++)
    {
        yp = y;
        y = y->next;
    }

    if (xp)
    {
        xp->next = y;
    }
    if (yp)
    {
        yp->next = x;
    }
    Node *temp = x->next;
    x->next = y;
    y->next = temp;
    if (K == 1)
    {
        return y;
    }
    if (K == num)
    {
        return x;
    }
    return head;
}