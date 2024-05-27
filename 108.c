#include<stdio.h>
int main()
{
    int n[5];
    printf("\nEnter 5 numbers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\nInputted array=");
    for(int i=0;i<5;i++)
    {
        printf("\n%d",n[i]);
    }
}