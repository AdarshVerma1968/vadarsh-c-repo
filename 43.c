#include<stdio.h>
int main()
{
    char n[15];
    int m1,m2,m3,avgmark;
    printf("Enter the name of student:");
    gets(n);
    printf("\nEnter 1st sub marks:");
    scanf("%d",&m1);
    printf("\nEnter 2nd sub marks:");
    scanf("%d",&m2);
    printf("\nEnter 3rd sub marks:");
    scanf("%d",&m3);
    avgmark=(m1+m2+m3)/3;
    if(avgmark>60)
    {
        printf("Student name=%s",n);
        printf("\nGrade A");
    }
    else
    {
        printf("Student name=%s",n);
        printf("\nGrade B");
    }

}