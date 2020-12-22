#include<iostream>
using namespace std;
int main()
{
    int m[10][10];
    int i,j,n,k,sumd1=0,sumd2=0,suml=0,sumu=0;
    cout<<"Enter the order of the matrix: ";
    cin>>n;
    cout<<"\nEnter the elements: "<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>m[i][j];
        }
    }
    cout<<"\nThe matrix is: ";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    do
    {
        cout<<"\nEnter a choice:\n\n1. Modify the Matrix\n2. Sum of Leading Diagonal Elements \n3. Sum of Second Diagonal Elements \n4. Sum of Upper Triangle Elements\n5. Sum of Lower Triangle Elements\n0. Exit\n\n";
        cin>>k;
        switch(k)
        {
        case 1:
            {
                cout<<"Enter the order of the matrix: ";
                cin>>n;
               cout<<"\nEnter the elements: "<<endl;
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cin>>m[i][j];
                    }
                }
                cout<<"\nThe matrix is: \n";
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cout<<m[i][j]<<" ";
                    }
                    cout<<"\n";
                }
                break;
            }
        case 2:
            {
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if(i==j)
                            sumd1+=m[i][j];
                    }
                }
                cout<<"\nSum of Leading Diagonal Elements is: "<<sumd1<<endl;
                break;
            }
        case 3:
            {
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if(i+j==n-1)
                            sumd2+=m[i][j];
                    }
                }
                cout<<"\nSum of Second Diagonal Elements is: "<<sumd2<<endl;
                break;
            }
        case 4:
            {
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if(i>j)
                            sumu+=m[i][j];
                    }
                }
                cout<<"\nSum of Upper Triangle Elements is: "<<sumu<<endl;
                break;
            }
        case 5:
            {
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if(i<j)
                            suml+=m[i][j];
                    }
                }
                cout<<"\nSum of Lower Triangle Elements is: "<<suml<<endl;
                break;
            }
        case 0:
            cout<<"Bye! Have a great time"<<endl;
            break;
        default: 
            cout<<"Invalid input!";
        }
    }while(k!=0);
    return 0;
}