#include<iostream>
using namespace std;
long int fact(int n)
{
    if (n==0)
        return 1;
    else
        return n*fact(n-1);
}
class factorial
{
private:
    int n;
public:
    void getdata()
    {
        cout<<"Enter the value of n: ";
        cin>>n;
    }
    void display()
    {
        long int f;
        f=fact(n);
        cout<<"\nFactorial of "<<n<<" is "<<f<<endl;
    }
};
int main()
{
    factorial c;
    c.getdata();
    c.display();
    return 0;
}
