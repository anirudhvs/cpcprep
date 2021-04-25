
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* insNext(Node* n, int d){
    cout<<"node crear"<<endl;
    Node* temp =  new Node(d);
    cout<<"here insnex"<<endl;
    if(n==NULL){
        return temp;
    }
    else {
        n->next=  temp;
        return n;
    }
}


class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        cout<<"Here"<<endl;
        Node *ans;
        Node *anshead;
        ans = anshead = NULL;
        set<int> s;
        while(head1!=NULL){
            s.insert(head1->data);
            cout<<"inserted "<<head1->data<<endl;
            head1 = head1->next;
        }
        
        while(head2!=NULL){
            if(s.find(head2->data)!=s.end()){
                cout<<"head2 int "<<head2->data<<endl;
                if(ans==NULL){
                    cout<<"here92"<<endl;
                    anshead = ans = insNext(ans, head1->data);
                    cout<<"here93"<<endl;
                } else {
                    ans = insNext(ans, head1->data);
                    ans = ans->next;
                }
            }
            head2  = head2->next;
        }
        return anshead;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}