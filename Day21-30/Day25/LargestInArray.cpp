#include<iostream>
using namespace std;
int main()
{
    int a[50],n,max1,max2,pos1,pos2;
    cout<<"Enter the no. of elements of the array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //To check the 1st Largest number of the array
    max1=a[0];
    for(int i=0; i<n; i++)
    {
        if(max1<=a[i])
        {
            max1=a[i];
            pos1=i;
        }
    }
    cout<<"Largest Element of the array is "<<max1<<" at position "<<++pos1<<endl;
    //To find the 2nd Largest number of the array
    for(int i=0; i<n; i++)
    {
        if(a[i]==max1)
            continue;
        else
        {
            max2=a[i];                    //To set the value of max2 other than max
            break;
        }
    }
    //This loop finds 2nd Largest number
    for(int i=0; i<n; i++)
    {
        if(a[i]>max2 && a[i]!=max1)
        {
            max2=a[i];
            pos2=i;
        }
    }
    cout<<"Second Largest Element of the array is "<<max2<<" at position "<<++pos2<<endl;
    return 0;
}