#include<stdio.h>
int main()
{
    int i;
    input: //identifier
    printf("\nEnter the number:");
    scanf("%d",&i);
    if(i>0)
        {
            printf("\nSquare of number is:%d",i*i);
        }
    else if(i<0)
        {
            printf("\nRe-enter the Number");
            goto input; //goto with identifier
        } 
}