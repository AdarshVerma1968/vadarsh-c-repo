#include<stdio.h>
int main()
{
    int n[5];
    printf("\nEnter 5 numbers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\n1st and last values are:%d\n%d",n[0],n[4]);
}