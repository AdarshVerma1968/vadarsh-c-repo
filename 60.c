#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char n[15],ch;
    int bs,da,hra,ns;
    input://identifier
    printf("\nEnter the employee name:");
    fflush(stdin);
    gets(n);
    printf("\nEnter the basic salary:");
    scanf("%d",&bs);
    da=(bs*20)/100;
    hra=(bs*10)/100;
    ns=bs+da+hra;
    printf("\nEmployee name is=%s",n);
    printf("\nNet salary=%d",ns);
    con://identifier
    fflush(stdin);
    printf("\nDo you want to Continue then press Y/N:");
    scanf("%c",&ch);
    if(ch=='Y'||ch=='y')
    {
        goto input;
    }
    else if(ch=='N'||ch=='n')
    {
        exit(0);
    }
    else
    {
        printf("\nInvalid choice");
        goto con;
    }
    return 0;
}