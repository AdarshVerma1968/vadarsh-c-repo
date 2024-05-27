#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter the 1st number:");
    scanf("%d",&x);
    printf("\nEnter the 2nd number:");
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swapping 1st number:%d",x);
    printf("\nAfter swapping 2nd number:%d",y);
}