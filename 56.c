#include<stdio.h>
int main()
{
    int i;
    printf("Enter the number(1-7):");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("\nSunday");
        break;
        case 2:
        printf("\nMonday");
        break;
        case 3:
        printf("\nTuesday");
        break;
        case 4:
        printf("\nWednesday");
        break;
        case 5:
        printf("\nThursday");
        break;
        case 6:
        printf("\nFriday");
        break;
        case 7:
        printf("\nSaturday");
        break;
        default:
        printf("\nInvalid Number");
    }
     return 0;
}