#include<stdio.h>
#include "register.c"
#include "New log in.c"

int main()
{
system("COLOR 0C");
    printf("\n\t\t\t\t****WELLCOME TO ATM BOOTH MANAGEMENT SYSTEM****   ");

    printf("\n\t\t\t\t ||1.        New User           ||");
    printf("\n\t\t\t\t ||2.        Log In             ||\n");
    printf("---------------------------------------------------------------------------------------------------------------------\n\t\t\t\t");

    int a;

    scanf("%d",&a);
    if(a==1)
    {
        reg();
    }
    else if (a==2)
    {
        log();
    }
    else
    {
        printf("Invalid Selection");
    }
}
