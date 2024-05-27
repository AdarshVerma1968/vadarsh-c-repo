#include<stdio.h>
int main()
{
    char n[10];
    int c,pc,st,lt;
    printf("Enter the name of the item:");
    scanf("%s",&n);
    printf("\nEnter the cost:");
    scanf("%d",&c);
    st=(c*10)/100;
    lt=(c*5)/100;
    pc=c+st+lt;
    printf("\nThe name of item is:%s",n);
    printf("\nThe sale cost of item is:%d",pc);
}