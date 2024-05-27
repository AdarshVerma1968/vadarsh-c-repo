#include<stdio.h>
int main()
{
    int n;
    printf("enter any number (0 to 255):");
    scanf("%d",&n);
    if(n>=0 && n<=255)
    {
        char ch=n;
        printf("ASCII of the number is:%c",n,ch);
    }
    else
    {
        printf("\nInvalid number");
    }
}