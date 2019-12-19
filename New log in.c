#include<stdio.h>
#include "Menu.c"

int log()
{

    char n[20],p[20];
    char a[20],b[20];
    printf("\n\t\t\t\t\t || Simple Log In System  ||");
    printf("\n\t\t\t\tEnter your User name to log in:\n\n\t\t\t\t");
    scanf("%s",a);
    printf("\n\t\t\t\tEnter your Password:\n\n\t\t\t\t");
    scanf("%s",b);
    getchar();
    freopen("account.txt","r",stdin);
    int f=0;
    while(scanf("%s%s",n,p)==2)
    {
        if(strcmp(a,n)==0&&strcmp(b,p)==0)
            f=1;
    }
    if(f==1)
    {
        printf("\n\t\t\t\tThis Account is verified\n\t\t\t\t");

        menu();
    }
    else
    {
        printf("\n\t\t\t\tThis Account is not verified");

    }

}
