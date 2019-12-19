#include<stdio.h>
#include "MB Final fixed.c"

int menu()
{
    system("COLOR 0A");

    printf("\n\t\t\t\t****WELLCOME TO ATM BOOTH MANAGEMENT SYSTEM****   ");

    printf("\n\t\t\t\t ||1.        Mobile Banking           ||");
    printf("\n\t\t\t\t ||2.        ATM CARD                 ||");

    printf("-------------------------------------------------------------------\n\n\t\t\t\t");
    int k;

    scanf("%d",&k);
    if(k==1)
    {
        mb();
    }

//    else if (k==2)
//
//    {
//        //atm();
//    }
    else
    {
        printf("Invalid selection");
    }

}

