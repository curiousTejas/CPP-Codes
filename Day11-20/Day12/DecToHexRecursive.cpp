#include<iostream>
using namespace std;
void decToHex(int d)
{
    int r;
    if(d>0)
    {
        decToHex(d/16);
        r=d%16;
        if(r>=0 && r<=9)
            cout<<r;
        else
            switch(r)
        {
        case 10:
            cout<<"A";
            break;
        case 11:
            cout<<"B";
            break;
        case 12:
            cout<<"C";
            break;
        case 13:
            cout<<"D";
            break;
        case 14:
            cout<<"E";
            break;
        case 15:
            cout<<"F";
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter a positive decimal number: ";
    cin>>n;
    cout<<"Hexadecimal Equivalent is: ";
    decToHex(n);
    return 0;
}
