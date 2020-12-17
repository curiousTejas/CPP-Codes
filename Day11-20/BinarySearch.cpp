#include<iostream>
using namespace std;
int search(int arr[], int x, int elfirst, int ellast)
{
    while(elfirst<=ellast)
    {
        int mid=elfirst+(ellast-elfirst)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]<x)
            elfirst=mid+1;
        else 
        ellast=mid-1;
    }
    return -1;
}
int main()
{
    int a[25], n, toFind;
    cout<<"\nEnter the number of elements you want in the array: ";
    cin>>n;
    cout<<"\nEnter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter the number you want to search: ";
    cin>>toFind;
    int result=search(a, toFind, 0, n-1);
    if(result==-1)
        cout<<"\nThe element "<<toFind<<" was not found in the array";
    else
        cout<<"\nElement "<<toFind<<" was found at position no. "<<result+1;
    return 0;    
}