#include<iostream>
#include<string>
using namespace std;
int main()
{
    char str[100];
    int k;
    printf("Enter a sentence to mock: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(i%2==0)
        {
            str[i]=toupper(str[i]);
        }
        else
        {
            str[i]=tolower(str[i]);
        }
    }
    printf("\n%s", str);
    return 0;
}