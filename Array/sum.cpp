#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    int sum=0;
     for(int i=0;i<n;i++)
    {
        sum+=numbers[i];
    }
    cout<<"Sum:"<<sum<<endl;
}
