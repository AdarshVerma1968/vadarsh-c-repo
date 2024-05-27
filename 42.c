#include<stdio.h>
int main()
{
    char n[20];
    int bs,da,hra,ns;
    printf("Enter the Employee name:");
    gets(n);
    printf("\nEnter basic salary:");
    scanf("%d",&bs);
    if(bs>3000)
    {
        da=(bs*10)/100;
        hra=(bs*5)/100;
        ns=bs+da+hra;
        printf("The Employee name is:%s",n);
        printf("\nNet salary is:%d",ns);
    }
    else{
        da=(bs*20)/100;
        hra=(bs*10)/100;
        ns=bs+da+hra;
        printf("The Employee name is:%s",n);
        printf("\nNet salary is:%d",ns);
    }
}

