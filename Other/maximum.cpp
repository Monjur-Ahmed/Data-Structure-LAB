#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter how many Numbers:";
cin>>n;
int numbers[n];

for(int i=0;i<n;i++){
    cin>>numbers[i];
}
  int  maximum = numbers[0];
  int  minimum = numbers[0];
  int maxPos=0,minPos=0;

    for(int i=0; i<n; i++)
    {
        if(numbers[i]>maximum)
        {
            maximum = numbers[i];
            maxPos=i;
        }
        if(numbers[i]<minimum)
        {
            minimum = numbers[i];
            minPos=i;
        }
    }
     printf("Maximum element is : %d  Index: %d\n", maximum,maxPos);
     printf("Minimum element is : %d Index: %d\n",minimum,minPos );
}
