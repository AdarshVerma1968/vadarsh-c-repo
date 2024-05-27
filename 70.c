#include<stdio.h>
int main()
{
    char n=1;
    int m=1,tmarks,avgmarks;
    while(m<=3)
    {
        while(n<=5)
        {
            printf("\nenter student name:");
            fflush(stdin);
            scanf("%c",&n);
            n++;
        }
        printf("\nEnter student marks=");
        fflush(stdin);
        scanf("%d",&m);
        m++;
    }


}