#include<iostream>
using namespace std;
void swap_num(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void display(int *arr, int s)
{
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int *arr, int s)
{
    for(int i=0; i<s; i++)
    {
        int swaps=0;
        for(int j=0; j<s-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap_num(arr[j], arr[j+1]);
                swaps=1;
            }
        }
        if(!swaps)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"\nEnter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nArray before sorting was: "<<endl;
    display(arr, n);
    bubbleSort(arr, n);
    cout<<"\nArray after sorting is: "<<endl;
    display(arr, n);
    return 0;
}
