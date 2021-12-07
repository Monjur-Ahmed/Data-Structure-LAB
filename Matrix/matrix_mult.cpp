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
    if(col==row2)
    {
        int sum=0;
        for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
        {
            for(int k=0;k<col;k++)
            {

               sum+=A[i][k]*B[k][j];
            }
           C[i][j]=sum;
           sum=0;
        }
    }
    //Printing C matrix
    cout<<"Multiplication of Two Matrix"<<endl;
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

