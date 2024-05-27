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
        r=r+t;
    }
    if(r==10)
    {
        printf("Inputted number is Magic number");
    }
    else
    {
        printf("Inputted number is not Magic number");
    }
}