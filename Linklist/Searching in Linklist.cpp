#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *a,*b,*c,*d;

int searchElement(){
    int y;
    printf("\nEnter searching value: ");
    scanf("%d",&y);
    d=a;
    int i=0,value=0;
    while(d)
    {
        i++;
        if(d->data==y)
        {
            printf("Found at %d\n",i);
            value++;
        }
        d=d->next;
    }
    if(value==0)
    {

        printf("Not Found\n");
    }

}


int main()
{
    int x;

    a=new node;
    printf("Enter the first value: ");
    scanf("%d",&a->data);

    printf("\n Enter next value: ");
    scanf("%d",&x);

    b=a;
    while(x>0)
    {
        c= new node;
        c->data=x;
        b->next=c;
        b=b->next;
        printf("\n Enter next value: ");
        scanf("%d",&x);

    }
    b->next=NULL;

    b=a;
    printf("\nAll elements are.............\n\n");
    while(b)
    {
        printf("%d ",b->data);
        b=b->next;

    }
    searchElement();
}
