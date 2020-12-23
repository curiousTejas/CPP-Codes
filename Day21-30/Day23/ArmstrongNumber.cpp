#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum=0,num,no;
    cout<<"Enter a number: ";
    cin>>no;
    num=no;
    do
    {
        sum+=pow((no%10),3);
        no/=10;
    }while(no!=0);
    if(sum==num)
        cout<<"The number "<<num<<" is an Armstrong number.";
    else
        cout<<"The number "<<num<<" is not an Armstrong number.";
    return 0;
}