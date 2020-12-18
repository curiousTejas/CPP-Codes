#include<iostream>
using namespace std;
void prime(int x)
{
    static int i=2;
    if(i<=x)
    {
        if(x%i==0)
        {
            cout<<i<<" ";
            x=x/i;
        }
        else
        {
            i++;
        }
        prime(x);
    }
}
int main()
{
    int n,choice;
    do
    {
        cout<<"\nMake a choice: \n1. Calculate Prime Factor\n2. Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                {
                    cout<<"Enter the number you want to find the factors of: ";
                    cin>>n;
                    cout<<"The prime factors of "<<n<<" are: "<<endl;
                    prime(n);
                    break;
                }
            case 2:
                cout<<"Have a nice time ahead! Bye!"<<endl;
                break;
            default: 
                cout<<"Invalid input! Try again!";
        }
    }while(choice!=2);
    return 0;
}