#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a aplhabet character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("\nInputted character is in upper case");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\nInputted character is in lower case");
    }
    else
    {
        printf("\nInputted character is not alphabet");
    }
    return 0;
}