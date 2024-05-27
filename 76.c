#include<stdio.h>
int main()
{
    int n,t,r=0,x;
    printf("Enter the nummber:");
    scanf("%d",&n);
    x=n;
    for( ;n!=0;n=n/10)
    {
        t=n%10;
        r=r*10+t;
    }
    if(x==r)
    {
        printf("Inputted number is Palindrome");
    }
    else
    {
        printf("Inputted number is not Palindrome");
    }
}