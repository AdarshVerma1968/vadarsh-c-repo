#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the 1st number:");
    scanf("%d",&x);
    printf("\nEnter the 2nd number:");
    scanf("%d",&y);
    printf("Enter the 3rd number:");
    scanf("%d",&z);
    if(x>y && x>z)
    {
        printf("Largest number is:%d",x);
    }
    else if(y>x && y>z)
    {
        printf("Largest number is:%d",y);
    }
    else if(z>x && z>y)
    {
        printf("Largest number is:%d",z);
    }
    else if(x==y && x==z)
    {
        printf("All are same");
    }
}