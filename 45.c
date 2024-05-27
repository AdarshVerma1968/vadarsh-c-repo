#include<stdio.h>
int main()
{
    char n[20];
    float ft,ct;
    printf("Enter Metro City Name:");
    gets(n);
    printf("\nEnter the fahrenheit temp:");
    scanf("%f",&ft);
    ct=(ft-32)*0.55;
    if(ct>30)
    {
        printf("Metro City Name=%s",n);
        printf("\nHot Day");
    }
    else
    {
        printf("Metro City Name=%s",n);
        printf("\nCool Day");
    }
}