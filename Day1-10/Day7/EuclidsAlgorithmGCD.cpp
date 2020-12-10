#include<iostream>
int get_gcd(int num, int den)
{
    int rem;
    while(den!=0)
    {
        rem=num%den;
        num=den;
        den=rem;
    }
    return num;
}
int main()
{
    int n1,n2,gcd,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    gcd = get_gcd(n1, n2);
    lcm=(n1*n2)/gcd;
    printf("GCD = %d \nLCM = %d", gcd, lcm);
    return 0;
}
