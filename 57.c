#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  printf("Enter the character('a','e','i','o','u'):");
  scanf("%c",&ch);
  ch = tolower(ch);
  switch(ch)
  { 
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("\n It's vowel");
    break;
    default:
    printf("\n It's consonant");
}
return 0;
}