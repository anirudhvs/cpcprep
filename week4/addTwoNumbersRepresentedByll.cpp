#include <bits/stdc++.h>
class Solution
{
public:
    //Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {

        stack<int> s1, s2;
        Node *p = first;
        while (p)
        {
            s1.push(p->data);
            p = p->next;
        }
        p = second;
        while (p)
        {
            s2.push(p->data);
            p = p->next;
        }
        int carry = 0;
        Node *ans = NULL;
        while (!s1.empty() || !s2.empty())
        {
            int x = 0, y = 0;
            if (!s1.empty())
            {
                x = s1.top();
                s1.pop();
            }
            if (!s2.empty())
            {
                y = s2.top();
                s2.pop();
            }

            Node *temp = new Node((x + y + carry) % 10);
            carry = (x + y + carry) / 10;
            if (ans == NULL)
            {
                ans = temp;
            }
            else
            {
                temp->next = ans;
                ans = temp;
            }
        }
        while (carry)
        {
            Node *temp = new Node(carry % 10);
            carry /= 10;
            temp->next = ans;
            ans = temp;
        }
        return ans;
    }
};