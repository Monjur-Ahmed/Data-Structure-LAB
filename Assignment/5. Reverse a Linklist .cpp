#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *p,*q,*r,*newHead;

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
    cout<<"\nElements in Linklist:";
    q=p;
    while(q)
    {
        cout<<" "<<q->data;
        q=q->next;
    }


}
void reverseList()
{
    q=p->next;
    r=q->next;
    p->next=NULL;
    while(q->next!=NULL){
        q->next=p;
        p=q;
        q=r;
        r=r->next;
    }
    q->next=p;

    cout<<"\nReverse LinkList: ";
    newHead=q;
    while(newHead)
    {
        cout<<" "<<newHead->data;
        newHead=newHead->next;
    }
}


int main()
{
    takeInput();
    reverseList();

}



