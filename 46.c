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
    if(ct<5)
    {
        printf("Metro City Name=%s",n);
        printf("\nCool Day");
    }
    else if(ct>5 && ct<15)
    {
        printf("Metro City Name=%s",n);
        printf("\nNormal Day");
    }
    else if(ct>15)
    {
        printf("Metro City Name=%s",n);
        printf("\nHot Day");
    }
}