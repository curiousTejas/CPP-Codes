#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<=2)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int i,j;
    cout<<"Enter the number of terms: ";
    cin>>i;
    cout<<"Fibonacci Series of "<<i<<" terms is: ";
    for(j=1; j<=i; j++)
    {
        cout<<fibo(j)<<" ";
    }
    return 0;
}
