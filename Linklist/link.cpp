#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *p,*q,*r,*s;

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
    cout<<"\n================Displaying Elements============="<<endl;
    q=p;
    while(q)
    {
        cout<<" "<<q->data;
        q=q->next;
    }


}
void insertNode()
{
    int x;
    cout<<"\n===========Insert a node after any given number==========="<<endl;
    cout<<"\nEnter the value of new node: ";
    s=new node;
    cin>>s->data;
    cout<<"\nEnter position number: ";
    cin>>x;
    q=p;
    while(q){
      if(q->data==x)
      {
          s->next=q->next;
          q->next=s;
      }
      q=q->next;
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
    insertNode();


    getch();
}
