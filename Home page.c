#include<stdio.h>
int main()
{
    printf("\n\t\t\t\t****WELLCOME TO ATM BOOTH MANAGEMENT SYSTEM****   ");

    printf("\n\t\t\t\t ||1.        New User           ||");
    printf("\n\t\t\t\t ||2.        Log In             ||\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n\n\t\t\t\t");
    int input;

    scanf("%d",&input);
    switch(input)
    {
    case 1:{

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
            printf("\n\t\t\t\tSorry Sir you must have 500tk on our account!!\n");
        }
        else
        {
            printf("\n\t\t\t\tYou have given %d taka\n",amount);
        }

        printf("\n\t\t\t\tEnter your User name:\n\n\t\t\t\t");
        scanf("%s",a);
        printf("\n\t\t\t\tEnter your Password:\n\n\t\t\t\t");
        scanf("%s",b);

        fprintf(F,"%s %s %s %s %s %d %s %s\n",first,last,birthday,gender,number,amount,a,b);
        fclose(F);

        printf("\n\t\t\t\tYou have successfully registered\n\t\t\t\t");
        break;
    }

    case 2:{
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

            //menu();
            printf("\n\t\t\t\t****WELLCOME TO ATM BOOTH MANAGEMENT SYSTEM****   ");

    printf("\n\t\t\t\t ||1.        Mobile Banking           ||");
    printf("\n\t\t\t\t ||2.        ATM CARD                 ||\n");

    printf("-------------------------------------------------------------------\n\n\t\t\t\t");
    int choose;
    scanf("%d",choose);
    switch(choose)
    {
    case 1:
        {
             int ab;
    //system("COLOR 0A");
    printf("\n\t\t\t\t###****** Mobile banking ******###\n");
    printf("\n\t\t\t\t||  1.=> Show balance     ||\n");
    printf("\n\t\t\t\t||  2.=> Balance withdraw ||\n");
    printf("\n\t\t\t\t||  3.=> Pin change       ||\n");
    printf("\n\t\t\t\t||  4.=> Bill payment     ||\n");
    printf("\n\t\t\t\t||  5.=> Money Transfer   ||\n");
    printf("\n\t\t\t\t||  6.=> Money Exchange   ||\n");
    printf("\n\t\t\t\t||  7.=> Emergency Help   ||\n");
    printf("\n\t\t\t\t    >>>>Enter Your choice:\n\n\t\t\t\t");


    scanf("%d",&ab);
        }
    }
        }
        else
        {
            printf("\n\t\t\t\tThis Account is not verified");

        }
        break;
    }

    }
    return 0;
}




