#include<stdio.h>
int main()
{
    int x,y;
    char ch;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("\nEnter the arithmetic operator('+','-','*','/','%'):");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        printf("\nSum of two numbers is:%d",x+y);
        break;
        case '-':
        printf("\nSubtraction of two numbers is:%d",x-y);
        break;
        case '*':
        printf("\nMultiplication of two numbers is:%d",x*y);
        break;
        case '/':
        printf("\nDivision of two numbers is:%d",x/y);
        case '%':
        printf("\nModulus of two number is:%d",x%y);
        default:
        printf("\nInvalid arithmetic operator");
    }
    return 0;
}