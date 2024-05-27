#include<stdio.h>
int main()
{
    int n,t,r=0,x;
    printf("Enter the number:");
    scanf("%d",&n);
    x=n;
    for( ;n!=0;n=n/10)
    {
        t=n%10;
        r=r+t*t*t;
    }
    if(x==r)
    {
        printf("Inputted number is Armstrong number");
    }
    else
    {
        printf("Inputted number is not Armstrong number");
    }
}