#include<stdio.h>
int main()
{
    int num=1;
    char ch;
    while(num<=255)
    {
        ch=num;
        printf("\nASCII character of the num is=%c",ch);
        num++;
    }
}