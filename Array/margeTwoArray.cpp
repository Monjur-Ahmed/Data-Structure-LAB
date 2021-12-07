#include<iostream>
using namespace std;

int main()
{

      int m,n;
      int A[50],B[50];
      cout<<"How many Numbers:";
      cin>>n;

      for(int i=0;i<n;i++)
      {
          cin>>A[i];
      }

      cout<<"How many Number:";
      cin>>m;
      for(int i=0;i<m;i++)
      {
          cin>>B[i];
      }
      int j=0;
      for(int i=n;i<m+n;i++)
      {
          A[i]=B[j];
          j++;
      }

      cout<<"Printing Marged Array: ";

       for(int i=0;i<m+n;i++)
      {
          cout<<" "<<A[i];
      }


}
