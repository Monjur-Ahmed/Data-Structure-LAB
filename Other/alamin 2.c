#include<stdio.h>
int main()
{
    char string []= "computer science";
    int m;
    for(m=0;string[m]!='\0';m++)
    {
        if(m%2==1)
        {
            printf("%c\t",string[m]);
        }
    }
}
