#include<iostream>
using namespace std;

int main()
{
    //A matrix
    int row,col;
    cout<<"Enter row and column size for A matrix:";
    cin>>row>>col;
    int A[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>A[i][j];
        }
    }

    //B matrix
    int row2,col2;
    cout<<"Enter row and column size for B matrix:";
    cin>>row2>>col2;
    int B[row2][col2];
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>B[i][j];
        }
    }

    //Sum of two matrix
    int C[row][col];
    int sum=0;

    if(row==row2 && col==col2)
    {
        for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
          sum=A[i][j]+B[i][j];
          C[i][j]=sum;
        }
    }
    //Printing C matrix
    cout<<"Sum of Two Matrix"<<endl;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
          cout<<" "<<C[i][j];
        }
        cout<<"\n";
    }

    }
    else{
        cout<<"Dimensions are not same"<<endl;
    }




}
