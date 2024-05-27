#include<stdio.h>
int main()
{
    char a[20],b[20],c[30];
    int r1,r2,r3,q1,q2,q3,amnt,discount,tamnt;
    printf("Enter the name of 1st item:");
    scanf("%s",&a);
    printf("\nEnter the rate of 1st item:");
    scanf("%d",&r1);
    printf("\nEnter the quantity of 1st item:");
    scanf("%d",&q1);  
    printf("Enter the name of 2nd item:");
    scanf("%s",&b);
    printf("\nEnter the rate of 2nd item:");
    scanf("%d",&r2);
    printf("\nEnter the quantity of 2nd item:");
    scanf("%d",&q2);
    printf("Enter the name of 3rd item:");
    scanf("%s",&c);
    printf("\nEnter the rate of 3rd item:");
    scanf("%d",&r3);
    printf("\nEnter the quantity of 3rd item:");
    scanf("%d",&q3);
    amnt=(r1*q1)+(r2*q2)+(r3*q3);
    discount=(amnt*10)/100;
    tamnt=amnt-discount;
    printf("\nName of 1st item is:%s",a);
    printf("\nName of 2nd item is:%s",b);
    printf("\nName of 3rd item is:%s",c);
    printf("\namount of item is:%d",amnt);
    printf("\n10 percent Discount on amount:%d",discount);
    printf("\ntotal amount after 10 percent discount:%d",tamnt);
}