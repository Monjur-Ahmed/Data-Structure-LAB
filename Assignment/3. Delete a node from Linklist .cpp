#include<iostream>
#include<stdlib.h>
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
void deleteNode()
{
    int x;
    cout<<"\nEnter the value that want to delete: ";
    cin>>x;
    q=p;

    while(q->data!=x && q->next!=NULL){
      t=q;
      q=q->next;
    }
      if(p==q){
        p=p->next;
        free(q);
    }
    else{
    t->next=q->next;
    free(q);
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
    deleteNode();

}


