#include<stdio.h>
int mb()
{
    int ab;
    system("COLOR 0A");
    printf("\n\t\t\t\t###******ATM CARD******###\n");
    printf("\n\t\t\t\t||  1.=> Show balance     ||\n");
    printf("\n\t\t\t\t||  2.=> Balance withdraw ||\n");
    printf("\n\t\t\t\t||  3.=> Pin change       ||\n");
    printf("\n\t\t\t\t||  4.=> Bill payment     ||\n");
    printf("\n\t\t\t\t||  5.=> Money Transfer   ||\n");
    printf("\n\t\t\t\t||  6.=> Money Exchange   ||\n");
    printf("\n\t\t\t\t||  7.=> Emergency Help   ||\n");
    printf("\n\t\t\t\t    >>>>Enter Your choice:\n\n\t\t\t\t");


    while (scanf("%d",&ab)!=EOF)

        if(ab==1)
            printf("\n\t\t\t\tNow you have 5000000tk on your account..\n\t\t\t\t");

        else if(ab==2)
        {
            int ammount=50000000,amt=0,scb=0;
            printf("\n\t\t\t\tEnter Ammount:\n\n\t\t\t\t");
            scanf("%d",&amt);
            scb=ammount-amt;
            if(scb<500)
            {
                printf("\n\t\t\t\tYou have insafficient balance.The liimitation balance is 500tk.You have must upto 500tk\n\t\t\t\t");
            }
            else
            {
                printf("\n\t\t\t\tBalance withdraw successfull!!Now you have %d tk on Your account!!\n\t\t\t\t",scb);
            }
        }
        else if(ab==3)
        {
            int oldpin,cpin;
            printf("\n\t\t\t\tEnter your Current Pin number:\n\n\t\t\t\t");
            scanf("%d",&oldpin);
            printf("\n\t\t\t\tEnter your new Pin number:\n\n\t\t\t\t");
            scanf("%d",&cpin);
            printf("\n\t\t\t\tYou have successfully change your pin number %d to %d\n\t\t\t\t",oldpin,cpin);
        }
        else if(ab==4)
        {
            printf("\n\t\t\t\t******###Bill payment******###\n\n\t\t\t\t");
            printf("\n\t\t\t\tEnter Your choice:\n");
            printf("\n\t\t\t\t1. Gas bill\n");
            printf("\n\t\t\t\t2. Electricity bill\n");
            printf("\n\t\t\t\t3. Water bill\n\n\t\t\t\t");
            int bill,b,c,d;
            while (scanf("%d",&bill)!=EOF)
                if(bill==1)
                {
                    //int b;
                    printf("\n\t\t\t\tGive your Gas bill number:\n\n\t\t\t\t");
                    scanf("%d",&b);
                    printf("\n\t\t\t\tYou have paid your gas bill..!!\n\n\t\t\t\t");
                }
                else if(bill==2)
                {

                    printf("\n\t\t\t\tGive your Electricity bill number:\n\n\t\t\t\t");
                    scanf("%d",&c);
                    printf("\n\t\t\t\tYou have paid your Electricity bill..!!\n\n\t\t\t\t");
                }
                else if(bill==3)
                {
                    //int b;
                    printf("\n\t\t\t\tGive your Water bill number:\n\n\t\t\t\t");
                    scanf("%d",&d);
                    printf("\n\t\t\t\tYou have paid your Water bill..!!\n\n\t\t\t\t");
                }
                else
                {
                    printf("\n\t\t\t\tInvalid input\n");
                }

        }
else if(ab==5)
{
    {
    printf("\n\t\t\t\t###******Money Transfer******###\n");
    printf("\n\t\t\t\t|| 1.=>Account to account   ||\n");
    printf("\n\t\t\t\t|| 2.=>Account to Flexiload ||\n");

    int a;
    while (scanf("%d",&a)!=EOF)/*For continue The loop of Home page..*/

        if(a==1)
        {
            printf("\n\t\t\t\t||1.=>Account to account\n");
            printf("\n\t\t\t\tWhich account you want to transfer:\n\n\t\t\t\t");
            int account[30],ammount;
            scanf("%s",account);
            printf("\n\t\t\t\tEnter ammount:\n\n\t\t\t\t");
            scanf("%d",ammount);
            printf("\n\t\t\t\tYou have successfull to sent money to %s to %d tk\n\n\t\t\t\t",account,ammount);


        }
        else
        {
            printf("\n\t\t\t\t  ###******Flexiload******###\n");
            printf("\n\t\t\t\t|| 1.=>  Grameenphone||\n");
            printf("\n\t\t\t\t|| 2.=>  Banglalink  ||\n");
            printf("\n\t\t\t\t|| 3.=>  Robi        ||\n");
            printf("\n\t\t\t\t|| 4.=>  Airtel      ||\n");
            printf("\n\t\t\t\t|| 5.=>  Teletalk    ||\n\n\t\t\t\t");
            int b;
            while (scanf("%d",&b)!=EOF)/*For continue The loop of Home page..*/

                if(b==1)
                {
                    int gp=0,ammount=0,password=0;
                    printf("Enter Grameenphone number:\n\n\t\t\t\t");
                    scanf("%d",&gp);
                    printf("Enter ammount:\n\n\t\t\t\t");
                    scanf("%d",&ammount);
                    printf("Number is %d\n Ammount is %d tk\n\n\t\t\t\t",gp,ammount);
                    printf("Enter your password:\n");
                    scanf("%d",&password);
                    printf("You have successful to Flexiload %d to %d tk!!!\n",gp,ammount);

                }
            if(b==2)
            {
                int bl=0,ammount=0,password=0;
                printf("Enter Banglalink number:\n");
                scanf("%d",&bl);
                printf("Enter ammount:\n");
                scanf("%d",&ammount);
                printf("Number is %d\n Ammount is %d tk\n",bl,ammount);
                printf("Enter your password:\n");
                scanf("%d",&password);
                printf("You have successful to Flexiload %d to %d tk!!!\n",bl,ammount);

            }
            if(b==3)
            {
                int rb=0,ammount=0,password=0;
                printf("Enter Robi number:\n");
                scanf("%d",&rb);
                printf("Enter ammount:\n");
                scanf("%d",&ammount);
                printf("Number is %d\n Ammount is %d tk\n",rb,ammount);
                printf("Enter your password:\n");
                scanf("%d",&password);
                printf("You have successful to Flexiload %d to %d tk!!!\n",rb,ammount);

            }
            if(b==4)
            {
                int air=0,ammount=0,password=0;
                printf("Enter Airtel number:\n");
                scanf("%d",&air);
                printf("Enter ammount:\n");
                scanf("%d",&ammount);
                printf("Number is %d\n Ammount is %d tk\n",air,ammount);
                printf("Enter your password:\n");
                scanf("%d",&password);
                printf("You have successful to Flexiload %d to %d tk!!!\n",air,ammount);

            }
            if(b==5)
            {
                int tel=0,ammount=0,password=0;
                printf("Enter Teletalk number:\n");
                scanf("%d",&tel);
                printf("Enter ammount:\n");
                scanf("%d",&ammount);
                printf("Number is %d\n Ammount is %d tk\n",tel,ammount);
                printf("Enter your password:\n");
                scanf("%d",&password);
                printf("You have successful to Flexiload %d to %d tk!!!\n",tel,ammount);

            }
            else
            {
                printf("Invalid input!!!Please Input correct\a ");
            }

        }

}

}

        else if(ab==6)
        {
//            system ("COLOR 0A");
            printf("\n\t\t\t\t###******Currency Converter******###\n");
            printf("\n\t\t\t\t1. US to Bangladeshi tk\n");
            printf("\n\t\t\t\t2. Bangladeshi tk to Us Dollar\n");
            printf("\n\t\t\t\t3. Indian ruppe to Bangladeshi tk\n\n\t\t\t\t");

            int input;
            while (scanf("\n\t\t\t\t%d",&input)!=EOF)
                if(input==1)
                {
                    printf("\n\t\t\t\tEnter what dollar you want to convert in tk:\n\n\t\t\t\t");
                    float a,converter;
                    scanf("\n\t\t\t\t%f",&a);
                    float dollar=82.37,tk=0;
                    converter=dollar*a;
                    printf("\n\t\t\t\tHere your ammount:%.2f\n\t\t\t\t",converter);
                    return 0;
                }
                else if(input==2)
                {
                    printf("\n\t\t\t\tEnter what tk you want to convert in Dollar:\n\n\t\t\t\t");
                    float a,converter;
                    scanf("\n\t\t\t\t%f",&a);
                    float dollar=82.37,tk=0;
                    converter=a/dollar;
                    printf("\n\t\t\t\tHere your ammount:%.2f\n\t\t\t\t",converter);
                    return 0;
                }
                else if(input==3)
                {
                    printf("\n\t\t\t\tEnter what Rupee you want to convert in Tk:\n\n\t\t\t\t");
                    float a,converter;
                    scanf("\n\t\t\t\t%f",&a);
                    float rupee=1.28,tk=0;
                    converter=rupee*a;
                    printf("\n\t\t\t\tHere your ammount:%.2f\n\t\t\t\t",converter);
                    return 0;
                }

        }
         else if(ab==7)
         {
             printf("\n\t\t\t\tSorry for some system problem.Thanks for being patient.\n\n\t\t\t\tPlease call our head office here is the number:017*********\n\t\t\t\tThank you\n\t\t\t\t!!!");
         }
        else
        {
            printf("\n\t\t\t\tInvaild input!!!Please check.... \a");

        }


    return 0;
    //}
}



