#include<iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10];
    int i,j,n,count=0;
    cout<<"Enter the order of square matrix: "<<endl;
    cin>>n;
    cout<<"Enter the elements of the matrix: "<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The matrix is: \n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]==b[i][j]);
                count++;
        }
    }
    if(count==n*n)
        cout<<"Matrix is symmetrical"<<endl;
    else
        cout<<"Matrix is not symmetrical"<<endl;
    return 0;
}