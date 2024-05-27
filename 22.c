#include<stdio.h>
int main()
{
    char n[15];
    int r,q;
    printf("Enter the item name:");
    gets(n);
    printf("\nenter the item rate:");
    scanf("%d",&r);
    printf("\nenter the item quantity:");
    scanf("%d",&q);
    printf("\nThe name of item is:%s",n);
    printf("\nFinal price of the item is:%d",r*q);
}