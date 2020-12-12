#include<iostream>
using namespace std;
int decToBinary(int d)
{

        if(d==0)
            return 0;
        else
            return ((d%2)+(10*decToBinary(d/2)));
}
int main()
{
    int deci, bin;
    cout<<"Enter a positive decimal number: "<<endl;
    cin>>deci;
    bin=decToBinary(deci);
    cout<<"Binary Equivalent of "<<deci<<" is "<<bin;
    return 0;
}
