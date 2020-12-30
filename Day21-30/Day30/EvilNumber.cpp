#include<iostream>
using namespace std;
int main()
{
    int num,c;
    cout<<"Enter a number of your choice: "<<endl;
    cin>>num;
    while((num!=1)&&(num!=0))
    {
        if(num%2==1)
        {
            c++;
        }
        num/=2;
    }
    if (num==1)
        c++;
    if(c%2==0)
        cout<<"The number you entered is an evil number."<<endl;
    else
        cout<<"The number you entered is not an evil number."<<endl;
    return 0;
}
