#include<iostream>
#define MAX 10
using namespace std;

int queue[MAX];
int top = - 1;
int front = - 1;

void insert()
{
    int item;
    if(top == MAX - 1)
    {
       cout<<"Queue Overflow\n";
    }
    else
    {
        if(front== - 1)
            front = 0;
        cout<<"Inset Element in queue : ";
        cin>>item;
        top++;
        queue[top] = item;
    }
}
  void Delete()
{
    if(front == - 1 || front > top)
    {
        cout<<"Queue Underflow \n";
        return;
    }
    else
    {
        cout<<"Element deleted from queue is: "<<queue[front]<<endl;
        front = front + 1;
    }
}
void display()
{
    int i;
    if(front == - 1)
        cout<<"Queue is empty \n";
    else
    {
        cout<<"---------------------------------"<<endl;
        cout<<"Queue is:"<<endl;
        for(i = front; i <= top; i++)
            cout<<queue[i]<<endl;

    }
    cout<<"\n";
}

int main()
{
    int select;
    while (1)
    {
        cout<<"1.Insert 2.Delete 3.Display 4.Exit"<<endl;
        cout<<"Select Operation : ";
        cin>>select;
        switch(select)
        {
        case 1:
            insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            cout<<"Invalid Selection"<<endl;
        }
    }

    return 0;
}



