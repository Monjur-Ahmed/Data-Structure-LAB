#include<iostream>
using namespace std;

 int rec(int x)
 {
     if(x>0)
     {
         rec(x-1);
         cout<<" "<<x;
     }
     return 0;
 }


 int main(){

 rec(5);

 return 0;
 }
