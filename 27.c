#include<stdio.h>
int main()
{
    int sec,min,hrs;
    printf("Enter the seconds:");
    scanf("%d",&sec);
    min=sec/60;
    hrs=sec/3600;
    printf("\nTotal seconds:%d",sec);
    printf("\nTotal minutes:%d",min);
    printf("\nTotal hours:%d",hrs);
}
