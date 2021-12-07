#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *p,*q,*r,*t;

void takeInput()
{

    int x;
    p=new node;
    cout<<"Enter first value: ";
    cin>>p->data;

    cout<<"\nEnter next Value: ";
    cin>>x;
    q=p;
    while(x>0)
    {
        r=new node;
        r->data=x;
        q->next=r;
        q=q->next;
        cout<<"\nEnter next Value: ";
        cin>>x;
    }
    q->next=NULL;
    cout<<"\n================Displaying Sorted Linklist============="<<endl;
    q=p;
    while(q)
    {
        cout<<" "<<q->data;
        q=q->next;
    }


}
void sorted()
{
    cout<<"\nEnter the value of new node: ";
    r=new node;
    cin>>r->data;
    q=p;
    if(p->data>r->data)
    {
        r->next=p;
        p=r;
    }
    else
    {
        while(q!=NULL && q->data<r->data )
        {
            t=q;
            q=q->next;
        }
         r->next=q;
         t->next=r;
        }

    cout<<"\n================Displaying Updated Linklist============="<<endl;
    q=p;
    while(q)
    {
        cout<<" "<<q->data;
        q=q->next;
    }
}


int main()
{
    takeInput();
    sorted();
}


