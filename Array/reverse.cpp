#include<iostream>
using namespace std;

int main()
{

      int n,temp;
      cout<<"How many numbers:";
      cin>>n;
      int numbers[n];

      for(int i=0;i<n;i++)
      {
          cin>>numbers[i];
      }
      int j=n-1;
      for(int i=0;i<n/2;i++)
      {
          temp=numbers[i];
          numbers[i]=numbers[j];
          numbers[j]=temp;
        j--;
      }

      cout<<"Reverse Array:";
      for(int i=0;i<n;i++)
      {
          cout<<" "<<numbers[i];
      }

}
