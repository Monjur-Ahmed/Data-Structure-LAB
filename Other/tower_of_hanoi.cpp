#include<iostream>
using namespace std;

int count=0;

int hanoi(int n,char source,char aux, char dest)
{
    if(n==1)
    {
        cout<<"Move Disk "<<n<<" From "<<source<<" to "<<dest<<endl;
        count++;
    }
    else{
        hanoi((n-1),source,dest,aux);
        cout<<"Move Disk "<<n<<" from "<<source<<" to "<<dest<<endl;
        count++;
        hanoi((n-1),aux,source,dest);
    }

}



int main()
{
    int n;
    cout<<"Enter number of disk:";
    cin>>n;

    hanoi(n,'S','A','D');
    cout<<"Total Movement: "<<count<<endl;
    return 0;
}
