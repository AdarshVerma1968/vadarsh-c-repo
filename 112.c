#include<stdio.h>
int main()
{
    int n[10];
    printf("\nEnter 10 numbers:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            printf("\nEven value of all indexes =%d",n[i]);
        }
    }
}    