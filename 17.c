#include<stdio.h>
int main()
{
   float r,h,volm;
   printf("Enter the radius:");
   scanf("%f",&r);
   printf("\nEnter the height:");
   scanf("%f",&h);
   volm=0.33*3.14*r*r*h;
   printf("\nVolume of the circular cone:%f",volm);
}