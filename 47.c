#include<stdio.h>
int main()
{
    char n[20];
    int age;
    printf("Enter the name:");
    gets(n);
    printf("\nEnter Age:");
    scanf("%d",&age);
    if(age<5)
    {
        printf("Child");
    }
    else if(age>5 && age<18)
    {
        printf("Teenager");
    }
    else if(age>18 && age<30)
    {
        printf("Young");
    }
    else if(age>30)
    {
        printf("Old");
    }
}