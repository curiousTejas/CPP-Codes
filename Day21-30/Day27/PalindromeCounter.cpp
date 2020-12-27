#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//The check function checks whether the word is palindrome or not
bool check(string extra)
{
    int len = extra.length();
    transform(extra.begin(), extra.end(), extra.begin(), ::tolower);
    for(int i=0; i<len; i++,len--)
    {
        if(extra.at(i)!=extra.at(len-1))
        {
            return false;
        }
    }
    return true;
}
int palindrome(string str, int length) //Counts number of palindrome words in the sentence
{
    int c=0;
    string extra = "";
    for (int i=0; i<length; i++)
    {
        char temp=str.at(i);
        if(temp!=' ')
        {
            extra=extra+temp;
        }
        else
        {
            if(check(extra))
            {
                c++;
            }
            extra = "";
        }
    }
    return c;
}
int main()
{
    string str;
    cout<<"Enter a sentence: "<<endl;
    getline(cin,str);
    str = str+" ";
    int length = str.length();
    cout<<"The number of palindrome words in the above sentence is: "<<palindrome(str, length)<<endl;
    return 0;
}
