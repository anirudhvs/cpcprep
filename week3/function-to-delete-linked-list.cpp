#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();

    new_node->data = new_data;
 
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}
 

void deleteList(Node **head){
    Node  *current = *head;
    Node  *next = current->next;
    while(current){
        cout<<"Deleting "<<current->data<<endl;
        delete current;
        current = next;
        next = current->next;
    }

    *head = NULL;
}

int main()
{

    Node* head = NULL;

    long n;
    cout<<"Enter no of inputs: ";
    cin>>n;
    for(long i=0; i<n; i++){
        long temp;
        cin>>temp;
        push(&head, temp);
    }
    deleteList(&head);
 

}