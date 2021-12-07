#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
struct node *a,*b,*c,*d,*e;
int main()
{
    int x;
    a= new node;
    printf("Enter first value: ");
    scanf("%d",&a->data);

    printf("\nEnter next value: ");
    scanf("%d",&x);
    b=a;

    while(x>0){
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

    while(b){
        printf("%d  ",b->data);
        b=b->next;
    }

    cout<<"\n\n=====Inserting a new Node at the front====="<<endl;
    d= new node;
    cout<<"\nEnter a value for new node: ";
    cin>>d->data;
    d->next=a;
    a=d;
    cout<<"========print updated value============="<<endl;
    b=a;
    while(b){
        printf("%d  ",b->data);
        b=b->next;
    }

    cout<<"\n\n=====Inserting a new Node at any given position====="<<endl;
    int position;
    cout<<"Enter Position: ";
    cin>>position;
    e=new node;

     cout<<"\nEnter a value for new node: ";
     cin>>e->data;
     if (position ==3){
      int  value = 1;
        b=a;

	while (value != 2)
		{
			b = b->next;
			value++;
        }
        e->next = b->next;
        b->next = e;
     }

     if (position ==2){
      int  value = 1;
        b=a;

	while (value !=1)
		{
			b = b->next;
			value++;
        }
        e->next = b->next;
        b->next = e;
     }

     if (position ==4){
      int  value = 1;
        b=a;

	while (value != 3)
		{
			b = b->next;
			value++;
        }
        e->next = b->next;
        b->next = e;
     }

      cout<<"========print updated value============="<<endl;
      b=a;
      while(b){
        printf("%d  ",b->data);
        b=b->next;
    }

}

