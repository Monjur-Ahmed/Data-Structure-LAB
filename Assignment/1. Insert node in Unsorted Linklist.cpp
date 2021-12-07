#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *a,*b,*c,*d,*e;

void input()
{
    int x;
    a= new node;
    printf("Enter first value: ");
    scanf("%d",&a->data);

    printf("\nEnter next value: ");
    scanf("%d",&x);
    b=a;

    while(x>0)
    {
        c=new node;
        c->data=x;
        b->next=c;
        b=b->next;
        printf("\nEnter next value: ");
        scanf("%d",&x);

    }
    b->next=NULL;
    b=a;
    printf("\nALL Elements are: ");

    while(b)
    {
        printf("%d  ",b->data);
        b=b->next;
    }
}

void insertNode()
{
    cout<<"\n\n=====Inserting a new Node at the front====="<<endl;
    d= new node;
    cout<<"\nEnter a value for new node: ";
    cin>>d->data;
    d->next=a;
    a=d;
    cout<<"========print updated value============="<<endl;
    b=a;
    while(b)
    {
        printf("%d  ",b->data);
        b=b->next;
    }
    while(1)
    {
        cout<<"\n\n=====Inserting a new Node after any given value====="<<endl;
        int value;
        e=new node;
        cout<<"\nEnter a value for new node: ";
        cin>>e->data;
        if(e->data==0)
        {
            break;
        }
        cout<<"\nAfter Which Number: ";
        cin>>value;
        b=a;
        while(b)
        {
            if(value==b->data)
            {
                e->next = b->next;
                b->next = e;
            }
            b=b->next;
        }
        cout<<"========print updated value============="<<endl;
        b=a;
        while(b)
        {
            printf("%d  ",b->data);
            b=b->next;
        }
    }
}
int main()
{
    input();
    insertNode();
}
