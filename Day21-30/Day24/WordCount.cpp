#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char sentence[1000];
    int k,len,words=0,vowels=0,conso=0;
    cout<<"Enter a sentence: "<<endl;
    gets(sentence);
    do
    {
        cout<<"\nThe sentence you entered is: \n";
        puts(sentence);
        cout<<"\nEnter a choice: \n1. Count the Words in it\n2. Count the Vowels in it\n3. Count the Consonants in it\n0. Exit.\n";
        cin>>k;
        switch(k)
        {
        case 1:
        {
            len=strlen(sentence);
            for(int i=0; i<=len; i++)
            {
                if((sentence[i]==' '&&sentence[i+1]!=' ')||sentence[i]=='\0')
                    words++;
            }
            cout<<"\nThis sentence has total "<<words<<" words."<<endl;
            break;
        }
        case 2:
        {
            for(int i=0; i<strlen(sentence); i++)
            {
                char c = sentence[i];
                if (isalpha(c))
                {
                    switch(c)
                    {
                    case 'a':
                    case 'A':
                    case 'e':
                    case 'E':
                    case 'i':
                    case 'I':
                    case 'o':
                    case 'O':
                    case 'u':
                    case 'U':
                        vowels++;
                        break;    
                    }
                }
            }
            cout<<"\nIn this sentence, there are total "<<vowels<<" vowels"<<endl;
            break;
        }
        case 3:
        {
            for(int i=0; i<strlen(sentence); i++)
            {
                char c = sentence[i];
                if (isalpha(c))
                {
                    switch(c)
                    {
                    case 'a':
                    case 'A':
                    case 'e':
                    case 'E':
                    case 'i':
                    case 'I':
                    case 'o':
                    case 'O':
                    case 'u':
                    case 'U':
                        break;
                    default:
                        conso++;    
                    }
                }
            }
            cout<<"\nIn this sentence, there are total "<<conso<<" consonants"<<endl;
            break;
        }
        case 0:
            cout<<"Twas good helping you!";
            break;
        default:
            cout<<"Invalid Input!"<<endl;
        }
    }while(k!=0);
    return 0;
}