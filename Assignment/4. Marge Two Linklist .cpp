#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *p,*q,*r,*L1,*L2;

void takeInput()
{

    int x;
    cout<<"==================Enter elements for 1st Linklist===================="<<endl;
    p=new node;
    cout<<"\nEnter first value: ";
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
    L1=p;
    cout<<"\n==================Enter elements for 2nd Linklist==================="<<endl;
    p=new node;
    cout<<"\nEnter first value: ";
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
    L2=p;
    cout<<"\n---------------------------------------------"<<endl;
    cout<<"1st Linklist: ";
    q=L1;
    while(q)
    {
        cout<<" "<<q->data;
        q=q->next;
    }
    cout<<"\n2nd Linklist: ";
    q=L2;
    while(q)
    {
        cout<<" "<<q->data;
        q=q->next;
    }


}
void margeList()
{

    q=L1;
    while(q->next!=NULL){
      q=q->next;
    }
    q->next=L2;
    cout<<"\n---------------------------------------------"<<endl;
    cout<<"Marged List:";
    q=L1;
    while(q)
    {
        cout<<" "<<q->data;
        q=q->next;
    }
    cout<<" "<<endl;

}


int main()
{
    takeInput();
    margeList();

}



