#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("Inputted number is successfully divisible by 5");
    }
    else
    {
        printf("Inputted number is not successfully divisible by 5");
    }
}