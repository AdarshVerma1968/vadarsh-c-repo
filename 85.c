#include<stdio.h>
int main()
{
    int n=1,t,r=0,x;
    printf("\n\tAll Palindrome number between 1-500=");
    for( ;n<=500;n++)
    {
        for(x=n,r=0;x!=0;x=x/10)
        {
            t=x%10;
            r=r*10+t;
        }
        if(r==n)
        {
            printf("\n%d",n);
        }
    }
}