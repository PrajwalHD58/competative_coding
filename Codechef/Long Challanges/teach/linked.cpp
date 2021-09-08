#include<bits/stdc++.h>
using namespace std;

struct node
{
    //data members
    int value;
    struct node *next;

    //constructor
    node(int n)
    {
        value=n;
        next=NULL;
    }

};


int main()
{
    struct node *head;

    //dynamic node creation
    head=new node(9);
    head->next=new node(8);
    head->next->next=new node(9);
    head->next->next->next=new node(10);

   

    while(head!=NULL)
    {
        cout<<head->value<<" --->";
        head=head->next;
    }
    cout<<"NULL\n";
    return 0;
}