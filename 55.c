#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        printf("\nUpper case format:%c",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        printf("\nLower case format:%c",ch);
    }
    else
    {
        printf("\nInputted character is not an alphabet");
    }
}