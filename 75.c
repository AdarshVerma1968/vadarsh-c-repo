#include<stdio.h>
int main()
{
    int n,t,r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for( ;n!=0;n=n/10)
    {
        t=n%10;
        r=r*10+t;
    }
    printf("Reverse of the number is=%d",r);
}