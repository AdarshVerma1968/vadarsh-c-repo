#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the 1st number:");
    scanf("%d",&x);
    printf("\nEnter the 2nd number:");
    scanf("%d",&y);
    if(x>y)
    {
        printf("Largest number is:%d",x);
    }
    else if(y>x)
    {
        printf("Largest number is:%d",y);
    }
    else if(x==y)
    {
        printf("All are same");
    }
}