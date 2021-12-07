#include<iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue <int> list;
    list.push(10);
    list.push(15);
    list.push(5);
    list.push(8);

    cout<<"Top: "<<list.top();

}
