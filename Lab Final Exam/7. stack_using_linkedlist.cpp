#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

struct Node *p, *top = NULL;

void push(int value)
{
    p= new Node;
    p->data = value;
    p->next = top;
    top = p;
}
void pop()
{
    if(top==NULL)
        cout<<"Stack Underflow"<<endl;
    else
    {
        cout<<"The popped Item is "<< top->data <<endl;
        top = top->next;
    }
}
void display()
{
    struct Node *check;
    if(top==NULL)
        cout<<"Stack is empty";
    else
    {
        check = top;
        cout<<"Stack elements are: ";
        while (check != NULL)
        {
            cout<< check->data <<" ";
            check = check->next;
        }
    }
    cout<<endl;
}
int main()
{
    int index, value;
    while(true)
    {
    cout<<"Press 1:push 2:pop 3:display 4:exit"<<endl;
    cin>>index;
    switch(index)
    {
    case 1:
    {
        cout<<"Enter value to push:"<<endl;
        cin>>value;
        push(value);
        break;
    }
    case 2:
    {
        pop();
        break;
    }
    case 3:
    {
        display();
        break;
    }
    case 4:
    {
        cout<<"Exit"<<endl;
        return 5;
    }
    default:
    {
        cout<<"Invalid"<<endl;
    }
    }
    }
    return 0;
}
