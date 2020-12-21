#include<iostream>
#include<cmath>
using namespace std;
int determinant(int a[10][10], int x)
{
    int det=0;
    int submat[10][10];
    if (x==2)
        return ((a[0][0]*a[1][1])-(a[1][0]*a[0][1]));
    else 
    {
        for(int i=0; i<x; i++)
        {
            int subi=0;
            for(int j=1; j<x; j++)
            {
                int subj=0;
                for (int k=0; k<x; k++)
                {
                    if(k==i)
                        continue;
                    submat[subi][subj]=a[j][k];
                    subj++;   
                }
                subi++;
            }
            det=det+(pow(-1,i)*a[0][i]*determinant(submat, x-1));
        }
    }
    return det;
} 
int main()
{
    int n,p,q;
    int mat[10][10];
    cout<<"Enter the order of the square matrix: ";
    cin>>n;
    cout<<"\nEnter the elements of the matrix: ";
    for(p=0; p<n; p++)
    {
        for(q=0; q<n; q++)
        {
            cin>>mat[p][q];
        }
    }
    cout<<"\nThe matrix you entered is: \n\n";
    for(p=0; p<n; p++)
    {
        for(q=0; q<n; q++)
        {
            cout<<mat[p][q]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nThe determinant of the above matrix is: "<<determinant(mat, n);
    return 0;
}