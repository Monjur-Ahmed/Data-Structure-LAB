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

    int d;
    cout<<"Which value do want to delete?";
    cin>>d;
     for(int i=0;i<n;i++)
    {
        if(numbers[i]==d)
        {
            for(int j=i;j<n-1;j++)
            {
                numbers[j]=numbers[j+1];
            }
            n-=1;
        }
    }
    cout<<"\nPrinting Updated Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<numbers[i];
    }

    return 0;
}

