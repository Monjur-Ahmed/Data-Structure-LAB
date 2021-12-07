#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *p,*q,*t;


int main()
{
    int x;
    p = new node;
    printf("Enter First Number: ");
    scanf("%d",&p->data);

    printf("\nEnter Next Number: ");
    scanf("%d",&x);

    q=p;

    while(x>0)
    {
        t = new node;

        t->data = x;

        q->next = t;

        q = q->next;
        printf("\nEnter Next Number: ");

        scanf("%d",&x);
    }
    q->next = NULL;
    t = p;
    int y;
    printf("Enter Search Value: ");
    scanf("%d",&y);
    int i=0,value=0;
    while(t)
    {

      i++;
        if(t->data==y)
        {
            printf("Found At :%d\n",i);
            value++;

        }
        t = t->next;
    }
    if(value==0)
    {
        printf("Not Found");
    }
    return 0;
}
