#include<stdio.h>
int main()
{
    int n[5];
    printf("\nEnter the 5 numbers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\nReverse value of inputted number=");
    for(int i=4;i>=0;i--)
    {
        printf("\n%d",n[i]);
    }
}