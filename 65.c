#include<stdio.h>
int main()
{
    int x=1,y=2;
    while(x<=100)
    {
        while(y<=100)
        {
            printf("\nEven numbers:%d",y);
            y+=2;
        }
        printf("\nOdd numbers:%d",x);
        x+=2;
    }
}