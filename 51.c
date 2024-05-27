#include<stdio.h>
int main()
{
    int a,b,result;
    char ao;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("\nEnter the 2nd number:");
    scanf("%d",&b);
    printf("\nEnter the arithmetic operator (+,-,*,/,%):");
    fflush(stdin);
    scanf("%c",&ao);
    if(ao=='+')
    {
        result=a+b;
        printf("result is=%d",result);
    }
    else if(ao=='-')
    {
        result=a-b;
        printf("result is=%d",result);
    }
    else if(ao=='*')
    {
        result=a*b;
        printf("result is=%d",result);
    }
    else if(ao=='/')
    {
        result=a/b;
        printf("result is=%d",result);
    }
    else if(ao=='%')
    {
         result=a%b;
        printf("result is=%d",result);
    }
    else
    {
        printf("Invalid arithmetic operator");
    }
    return 0;
}
    