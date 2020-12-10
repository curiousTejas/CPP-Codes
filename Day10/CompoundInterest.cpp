#include<iostream>
using namespace std;
void power(float p,float b,int n)
{
    float result=1, A;
    for(int i=1; i<=n; i++)
    {
        result=result*b;
        A=p*result;
        cout<<"Compound Interest for "<<i<<" year(s) (in INR) = "<<A-p;
        cout<<"\n";
    }
}
int main()
{
    int n;
    float principal, rate, A, base, interest;
    cout<<"Enter principal amount (in INR): ";
    cin>>principal;
    cout<<"Enter Rate of Interest: ";
    cin>>rate;
    cout<<"Enter No. of Years: ";
    cin>>n;
    base=1+(rate/100);
    power(principal, base, n);
    return 0;
}
