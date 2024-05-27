#include<stdio.h>
int main()
{
    char n;
    int a,e,i,o,u;
    printf("Enter the alphabet:");
    scanf("%c",&n);
    if(n==a || n==e || n==i || n==o || n==u)
    {
        printf("Character is a Vowel");
    }
    else
    {
        printf("Character is consonant");
    }
}