#include<iostream>
using namespace std;
long int fact(int a)
{
    if (a==0)
        return 1;
    else
        return a*fact(a-1);
}
int main()
{
    int rows,i,j;
    cout<<"Enter the number of rows: "<<endl;
    cin>>rows;
    for(i=0; i<rows; i++)
    {
        for(int spaces=1; spaces<=rows-i-1; spaces++)
        {
            cout<<" ";
        }
        for(j=0; j<=i; j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
