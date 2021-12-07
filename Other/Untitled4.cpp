#include<stdio.h>
int main()
{
    int x[5]={1,2,3,4,5};

    int *ptr;

    ptr= &x[2];

    printf("%d",*ptr);
    printf("%d",*(ptr+1));
    printf("%d",*(ptr-1));
}

