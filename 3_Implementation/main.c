#include "inc/function.h"
#include<stdio.h>
#include<windows.h>
#include<time.h>



int main()
{
    system("color 3F");
    int pin=1234,pin1,pin2, option, enterPin, count=0, amount=1, output=0;
    float balance=5000;
    int continueTransaction =1;
    int accountno;
    int k;

    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t            %s",ctime(&now));
    printf("\n\t\t\t=============== Welcome to Online ATM Transaction ===============");

    output = take_input_function(pin, enterPin, count);
    if(output == 0)
    {
        exit(0);
    } else {
        enterPin = output;
    }
    
    while(continueTransaction != 0)
    {
        output = take_input_function(pin, enterPin, count);
        if(output == 0)
        {
            exit(0);
        } else {
            enterPin = output;
        }
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
        case 0:
        get_receipt_function(amount, balance);
        // continueTransaction = 0;
        break;
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
    // if (continueTransaction == 0)
    // {
    //     break;
    // }
    printf("\n\n\t\t\tDo you wish to perform another transaction?Press 1[Yes], 0[No]  ");
    scanf("%d",&continueTransaction);
    }   
    
    
    return 0;

}
