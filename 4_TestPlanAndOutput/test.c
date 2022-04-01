#include "../inc/function.h"
#include<stdio.h>
#include<windows.h>
#include<time.h>

int main()
{
    int u=1,t=3,pin,pin1,pin2, option, enterPin, count=0, amount, output;
    float balance;
    int continueTransaction;
    int accountno;
    int k;
    while (t)
    {
        balance=5000;
        continueTransaction =1;
        pin=1234;
        amount=1;
        output=0;
        printf("\n\t\t\t=============== Running For User %d ===============", u);
        while(continueTransaction!=0)
        {
            printf("\n\t\t\t=============== Available Transaction ===============");
            printf("\n\n\t1.withdrawl");
            printf("\n\n\t2.Deposit");
            printf("\n\n\t3.Check Balance");
            printf("\n\n\t4.Transfer Money");
            printf("\n\n\t5.Change Pin");
            printf("\n\n\tPlease select the option:  ");
            scanf("%d",&option);
            switch(option)
            {
                case 1:
                balance = case1_function(amount, option, balance);
                amount = 1;
                break;
                case 2:
                balance = case2_function(amount, option, balance);
                amount = 1;
                break;
                case 3:
                case3_function(balance);
                break;
                case 4:
                balance = case4_function(accountno, amount, balance);
                break;
                case 5:
                pin = case5_function(pin, pin1, pin2);
                break;

                defaulf:
                Beep(610,500);
                printf("\n\t\tInvalid Option!!!");

            }
            printf("\n\n\t\t\tDo you wish to perform another transaction?Press 1[Yes], 0[No]  ");
            scanf("%d",&continueTransaction);
        }
        t-=1;
        u+=1;
    }

}