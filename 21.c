#include<stdio.h>
int main()
{
    float ft,ct;
    char n[20];
    printf("Enter the metro city name:");
    gets(n);
    printf("\nenter the fahrenheit temp:");
    scanf("%f",&ft);
    ct=(ft-32)*0.55;
    printf("\nMetro city name is:%s",n);
    printf("\nCelsius temp is :%f",ct);
}