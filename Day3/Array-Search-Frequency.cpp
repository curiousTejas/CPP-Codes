#include<iostream>
using namespace std;
class searchElement
{
private:
    int num[50], n, c, counter=0;
public:
    void input()
    {
        cout<<"Enter the number of elements you want to enter: \n";
        cin>>n;
        cout<<"Enter the elements of the array: \n";
        for(int i=0; i<n; i++)
        {
            cin>>num[i];
        }
    }
    void findIt()
    {
        cout<<"Enter the number you want to search: \n";
        cin>>c;
        for(int i=0; i<n; i++)
        {
            if(num[i]==c)
            {
                counter++;
            }
        }
    }
    void result()
    {
        if(counter==0)
            cout<<"The number "<<c<<" doesn't exist in array.\n";
        else
            cout<<"The number "<<c<<" is present in the array "<<counter<<" time(s).\n";
    }
};
int main()
{
    searchElement s;
    int a;
    s.input();
    do
    {
        cout<<"\nEnter a choice: \n1. Search an element\n2. Exit\n";
        cin>>a;
        switch(a)
        {
        case 1:
            s.findIt();
            s.result();
            break;
        case 2:
            cout<<"Have a nice day ahead!\n";
            break;
        default:
            cout<<"Invalid input!";
        }
    }while(a!=2);
    return 0;
}
