#include<iostream>
#include<string>
using namespace std;
string units_to_text[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens_to_text[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string power_to_text[] = {"", "Thousand", "Million", "Billion"};
string padIfNeeded (string ans)
{
    if ( ans == "" )
        {
            return "";
        }
    return " " + ans;
}
string translateH(int hundred_chunk)
{
    if(hundred_chunk<20)
    {
        return units_to_text[hundred_chunk];
    }
    int tens = hundred_chunk/10;
    int ones = hundred_chunk%10;
    return tens_to_text[tens]+padIfNeeded(units_to_text[ones]);
}
string translateTh(int thousand_chunk)
{
    if(thousand_chunk<100)
    {
        return translateH(thousand_chunk);
    }
    else
    {
        int hundreds = thousand_chunk/100;
        int hun_chunk = thousand_chunk%100;
        return units_to_text[hundreds]+" Hundred "+padIfNeeded(translateH(hun_chunk));
    }
}
int main()
{
    int n;
    cout<<"Enter a number which you want in words: ";
    cin>>n;
    string number;
    bool is_negative=false;
    if(n<0)
    {
        is_negative = true;
        n*=-1;
    }
    int chunk_count=0;
    while(n>0)
    {
        if(n%1000!=0)
        {
            number = translateTh(n%1000)+padIfNeeded(power_to_text[chunk_count]+padIfNeeded(number));
        }
        n/=1000;
        chunk_count++;
    }
    if(number=="")
    {
        number="Zero";
    }
    if(is_negative)
    {
        number = "Negative "+number;
    }
    cout<<number;
    return 0;
}
