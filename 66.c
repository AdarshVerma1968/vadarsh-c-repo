#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    while(i<=100)
    {
        printf("\nSum of all numbers from 1 to 100=%d",sum);
        sum+=i;
        i++;
    }
     return 0;
}