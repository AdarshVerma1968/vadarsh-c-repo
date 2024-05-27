#include <stdio.h>
int main() 
{
    int n,tdigit=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for( ;n!=0;n=n/10)
    {
        tdigit++;
    }
    printf("Total digit of that number is:%d",tdigit);
}
