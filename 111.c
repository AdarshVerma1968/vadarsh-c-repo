#include<stdio.h>
int main()
{
    int n[5];
    int sum=0;
    printf("\nEnter 5 numbers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum+=n[i];
    }
    printf("Sum of all Index values are:%d",sum);
}