#include<stdio.h>
int main()
{
    int n,t=1,f=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for( ;t<=n;t++)
    {
        f=f*t;
    }
    printf("Factorial of a number is=%d",f);
}