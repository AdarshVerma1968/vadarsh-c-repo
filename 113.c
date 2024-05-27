#include<stdio.h>
int main()
{
    int a[5],b[5],c[10];
    int i;
    printf("\nEnter the values for array A=");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the values for array B=");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    c[i]=a[i]+b[i];
    for(int i=0;i<a[i];i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<b[i];i++)
    {
        c[i]=b[i];
    }
    printf("\nValues for array C=%d",c[i]);
    for(int i=0;i<c[i];i++)
    {
        printf("\n%d",c[i]);
    }
}