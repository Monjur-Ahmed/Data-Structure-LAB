#include<bits/stdc++.h>
using namespace std;

//Search Value
int x;
int A[1];
int binarySearch(int low, int high)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;

        if(A[mid]<x)
        {
           return binarySearch(mid+1,high);
        }
        else  if(A[mid]>x)
        {
           return binarySearch(low,mid-1);
        }

        else
        {

            return mid;
        }
    }

    if(low>high)
    {
        return -1;
    }
}

int main()

{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    A[n];
    cout<<"Enter elements in Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"Elements in Array:";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<A[i];
    }
    cout<<"\nEnter search value:";
    cin>>x;
    int low=0,high=n-1;

  int result=  binarySearch(low,high);
      (result == -1)? cout<<"Value Not Found"<<endl
                    : cout<<"Value Found"<<endl;

   return 0;

}
