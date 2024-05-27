#include<stdio.h>
int main()
{
    int x,y=1,res;
    printf("Enter the number:");
    scanf("%d",&x);
    while(y<=10)
    {
        res=x*y;
        printf("\nTable is=%d",res);
        y++;
    }
}