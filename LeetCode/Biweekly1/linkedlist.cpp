#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    node *next;

    node(int x)
    {
        value=x;
        next=NULL;
    }
};

// 1)starting of list
// 2)Ending of list 
// 3)in between start and end

//9--->8--->7---->10---->9;
void insertatfirst(node *head,int value)
{
    node *curr=new node(value);
    int t=head->value;
    while(head->next->value!=t)
    {
       
        head=head->next;
    }
    cout<<head->value<<" ";
    curr->next=head->next;
    head->next=curr;
    
}

node *insertatend(node *head,int value)
{
    //step->1
    node *temp=head;

    //step->2 go to last node
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    //last->next=curr
    node *curr=new node(value);
    temp->next=curr;

    return head;
}

node *insertinBetween(node *head,int value,int pos)
{
    node *curr=new node(value);

    //step1> go to that position
    node *temp=head;
    pos--;
    while(pos!=0)
    {
        pos--;
        temp=temp->next;
    }
   
    //step 2>insert node
    node *tempnext=temp->next;
    temp->next=curr;
    curr->next=tempnext;

    return head;
}

node *deletenode(node *head,int value)
{
    //case1>head delete
    if(head->value==value)
    {
      
        node *temp=head->next;  
        head->next=NULL;
        head=temp;
        return head;
    }
      
    //1>serch
    node *temp=head;
    while(temp->next->value!=value)
    {
        temp=temp->next;
    }
    node *tempnext=temp->next->next;
    temp->next=tempnext;
    return head;
    
}

int main()
{
    struct node *head;

    //dynamic node creation
    head=new node(9);
    head->next=new node(8);
    head->next->next=new node(7);
    head->next->next->next=new node(10);
    head->next->next->next->next=head;

    insertatfirst(head,11);   

    // head=insertatend(head,6);

    // head=insertinBetween(head,15,3);

    // head=deletenode(head,6);

    //node->value unique;
    
    int t=head->value;
    cout<<head->value<<" "<<"---->";
    head=head->next;
    while(head->value!=t)
    {
        cout<<head->value<<" --->";
        head=head->next;
    }

    cout<<t<<"\n";
    return 0;
}