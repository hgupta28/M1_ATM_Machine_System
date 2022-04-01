#include <stdio.h>
#include<windows.h>
#include<time.h>
int case1_function(int amount, int option, float balance)
{
	while(amount%500 !=0)
    {
        printf("\n\t\t\t=============== Choose Your Account Type ===============");
        printf("\n\n\t1.Saving Account");
        printf("\n\n\t2.Current Account");
        printf("\n\n\tPlease select the option:  ");
        scanf("%d",&option);
        printf("\n\t\tEnter the amount:  ");
        scanf("%d",&amount);
        if(amount % 500 !=0)
        printf("\n\t The amount should be multiple of 500");
    }
    if(balance < amount)
    {
        printf("\n\t Sorry insufficient balance");
        amount =1;
        return balance;
    }
    else
    {
        balance -= amount;
        printf("\n\t\tYou have withdrawn Rs. %d Your new balance is %2f",amount, balance);
        amount =1;
        return balance;
    }
}

int case2_function(int amount, int option, float balance)
{
	printf("\n\t\t\t=============== Choose Your Account Type ===============");
    printf("\n\n\t1.Saving Account");
    printf("\n\n\t2.Current Account");
    printf("\n\n\tPlease select the option:  ");
    scanf("%d",&option);
    printf("\n\t\t Please enter the amount:  ");
    scanf("%d",&amount);
    balance +=amount;
    
    printf("\n\t\tYou have deposited Rs. %d Your new balance is %2f",amount,balance);
    printf("\n\n\t\t\t=============== Thank you for banking with online ATM ===============");
    amount =1;
    return balance;
}

int case3_function(float balance)
{
	printf("\n\t\tYour balance is Rs. %.2f",balance);
}

int case4_function(int accountno, int amount, float balance)
{
	printf("\n\t\tEnter Account Number:  ");
    scanf("%d",&accountno);
    printf("\n\t\tEnter The Amount To Be Transfer:  ");
    scanf("%d",&amount);
     
    if(balance >=amount)
     {
        balance=balance-amount;
        printf("\n\t\t %d Transfer Successfully",amount);
        printf("\n\t\t Available Balance  is Rs. %.2f",balance);
        return balance;
     }
    else
    {
	    printf("Insufficient Balance");
	    return balance;
    }
}

int case5_function(int pin, int pin1, int pin2)
{
	printf("Enter Your Pin: ");
    scanf("%d",&pin2);
    if(pin==pin2)
    {
        printf("\nPlease Enter Your New Pin: ");
        scanf("%d",&pin1);
        pin = pin1;
        printf("\nPin Changed Succesfully");
        return pin;
    }
    else
    {
        printf("\n\nPlease Enter Correct Pin");
    }
}

int take_input_function(int pin, int enterPin, int count)
{
    while(pin != enterPin)
    {
        printf("\nPlease enter you pin:  ");
        scanf("%d",&enterPin);
        if(enterPin !=pin)
        {
            Beep(610,500);
            printf("Invalid pin!!!");
        }
        count++;
        if(count ==3 && pin!= enterPin)
        {
            return 0;
        }
    }
    return enterPin;
}

void get_receipt_function(int amount, float balance)
{
    printf("\n\t\t\t=============== Thank you for banking with online ATM ===============");
    printf("\n\t\t\t=============== Your Transaction is Successful ===============");
    printf("\n\t\t\t=============== Your Current Balance is Rs. %.2f ===============",balance);
    printf("\n\t\t\t=============== Your Transaction is Successful ===============");
    printf("\n\t\t\t=============== Thank you for banking with online ATM ===============");
}
