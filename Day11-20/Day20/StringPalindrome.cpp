#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char word1[100],word2[100];
    cout<<"Enter a word: ";
    gets(word1);
    strlwr(word1);
    strcpy(word2, word1);
    strrev(word2);
    if(strcmp(word1,word2)==0)
        cout<<"\nThe word is palindrome";
    else
        cout<<"\nThe word isn't palindrome";
    return 0;
}