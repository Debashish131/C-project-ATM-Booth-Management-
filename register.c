#include<stdio.h>

int reg()
{
    system("COLOR 0A");
    int amount,i;
    char n[20],p[20],first[100],last[100],birthday[100],gender[20],number[20],a[20],b[20];
    FILE *F=fopen("account.txt","a");
    printf("\n\t\t\t\tEnter your First name:\n\n\t\t\t\t");
    scanf("%s",first);
    printf("\n\t\t\t\tEnter your Last name:\n\n\t\t\t\t");
    scanf("%s",last);
    printf("\n\t\t\t\tEnter your birthday date:\n\n\t\t\t\t");
    scanf("%s",birthday);
    printf("\n\t\t\t\tEnter your Gender:\n\n\t\t\t\t");
    scanf("%s",gender);
    printf("\n\t\t\t\tEnter your Phone Number:\n\n\t\t\t\t");
    scanf("%s",number);
    printf("\n\t\t\t\tEnter ammount to open account:\n\n\t\t\t\t");
    scanf("%d",&amount);


    //while (scanf("%d",&amount)!=EOF)
    if(amount<500)
    {
        printf("\n\t\t\t\tSorry Sir you must have 500tk on our account!!\n\n\t\t\t\t");
    }
    else
    {
        printf("\n\t\t\t\tYou have given %d taka\n\n\t\t\t\t",amount);
    }

    printf("\n\t\t\t\tEnter your User name:\n\n\t\t\t\t");
    scanf("%s",a);
    printf("\n\t\t\t\tEnter your Password:\n\n\t\t\t\t");
    scanf("%s",b);

    fprintf(F,"%s %s %s %s %s %d %s %s\n",first,last,birthday,gender,number,amount,a,b);
    fclose(F);

    printf("\n\t\t\t\tYou have successfully registered\n\t\t\t\t");
}


