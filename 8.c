#include<stdio.h>
int main()
{
    float a,b;
    int x,y;
    printf("\nEnter the 1st number:");
    scanf("%f",&a);
    printf("\nEnter the 2nd number:");
    scanf("%f",&b);
    x=a;
    y=b;
    printf("\nSum of the two number:%f",a+b);
    printf("Subtraction of the two number\n:%f",a-b);
    printf("\nMultiplication of two number:%f",a*b);
    printf("\nDivision of two number:%f",a/b);
    printf("\nModulus of two number:%d",x%y);
}