#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n,o;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(k=1; k<=(2*(n-i))-1; k++)
        {
            cout<<" ";
        }
        if(i<n)
            cout<<"*";
        cout<<"\n";
    }
    for(l=2; l<=n; l++)
    {
        for(m=2; m<=l; m++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(o=1; o<=(2*(n-l))-1; o++)
        {
            cout<<" ";
        }
        if(l<n)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
