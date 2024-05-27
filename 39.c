#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>10 && n<20)
    {
        printf("Inputted number is in between 10 and 20");
    }
    else
    {
        printf("Inputted number is not in between 10 and 20");
    }
}