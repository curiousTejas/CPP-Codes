#include<iostream>
using namespace std;
int main()
{
    long int i,j,n,rem,sum;
    cout<<"Enter a number upto which you want Perfect Numbers: ";
    cin>>n;
    for(i=1; i<=n; i++)    
    {
        sum=0;
        for(j=1; j<=i-1; j++)
        {
            rem=i%j;
            if(rem==0)
                sum+=j;
        }
        if(sum==i)
            cout<<i<<" ";
    }
    cout<<"\n are the Perfect Numbers upto "<<n<<endl;
    return 0;
}