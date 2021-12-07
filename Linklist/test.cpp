#include<stdio.h>
#include<iostream>
using namespace std;
typedef struct node Node;
struct node{
int data;
Node *next;
};

Node *a,*b,*c,*d,*e,*f;

int main(){
    a=new node;
    printf("Enter value for a node: ");
    scanf("%d",&a->data);

    b=new node;
    printf("\nEnter value for b node: ");
    scanf("%d",&b->data);

    c=new node;
    printf("\nEnter value for c node: ");
    scanf("%d",&c->data);

    d=new node;
    printf("\nEnter value for d node: ");
    scanf("%d",&d->data);

    printf("===========================\n");
    printf("Priting Elements...........\n");


    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    e=a;
    while(e){
        printf("%d ",e->data);
        e=e->next;

    }

    //searching
    int x;
    cout<<"\nEnter searching Value: ";
    cin>>x;
    bool found;
    int value=0;
    while(a){
    value++;
        if(x==a->data)
        {
            found=true;
            break;
        }
        a=a->next;
    }
    if(found==true)
    {
        //cout<<"Found at %d"<<value<<endl;
        printf("Found at %d\n",value);
    }
    else{
        cout<<"Not Found"<<endl;
    }

}


