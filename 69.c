#include<stdio.h>
int main()
{
    int x=2,y=1,res;
    while(x<=20)
    {
        while(y<=10)
        {
            res=x*y;
            printf("\nThe table is=%d",res);
            y++;
        }
        x++;
        y=1;
        printf("\n");
    }
}