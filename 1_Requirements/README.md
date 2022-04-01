
# MY FIRST PROJECT

# "ATM Machine System in C"

# Introduction :

ATM Machine System contains the code for ATM implementation in C. 
This project make an automated teller machine with bank account, with that user would be able to withdrawl, deposit, view their account balance and 
also he/she can able to transfer money to another account.

It can be defined as actually simple code structure of ATM transaction process to be understood by a user. 
For implementing this project, we may have to use function but in the meantime for easy coding, we may have to switch cause statement.

From this ATM program in C, we can even use the mini-program for checking the total balance, depositing the amount, and withdrawing the amount from the account definitely since 
it is not time overwhelming.



# Activities :
1. Deposit
2. Withdrawl
3. Balance Enquiry
4. Money Transfer
5. Change pin

# Features :
1. saving account
2. current account

# Description :
=> By Clicking on option "1" you can withdraw the money
=> By Clicking on option "2" you can deposit the money
=> By Clicking on option "3" you can check your balance
=> By Clicking on option "4" you can transfer a money to another account.
=> By Clicking on option "5" you can able to change pin.

* Function used:
#ifndef FUNCTION_H
#define FUNCTION_H
int case1_function(int amount, int option, float balance);
int case2_function(int amount, int option, float balance);
int case3_function(float balance);
int case4_function(int accountno, int amount, float balance);
int case5_function(int pin, int pin1, int pin2);
void get_receipt_function(int amount, float balance);
int take_input_function(int pin, int enterPin, int count);
#endif

in next step
=> By clicking on option "1" you can able to choose your account type i.e. saving account.
=> By clicking on option "2" you can able to choose your account type i.e. current account.

then you can perform the operation.

# SWOT ANALYSIS
* $W's and 1'H

1. Who: ATM machine management.
2. What: ATM machine Records.
3. When: These was problem of performing different task such as deposite, withdraw, balance check, transfer money, change pin etc. It can be store data and access it easily.
4. Where: This project can be used for online transaction on atm machine.
5. How:  Firstly by entering correct pin into machine then you can able to do process easily, if pin will be correct.

# Advantages

1. Quick and prompt service is possible with less human errors.
2. It is beneficial for travelers.
3. It provides 24 hrs services without any staff and reduces the work load on bank staff.
4. Withdraw cash at any time or in urgent without the help of bank.
5. It ensures privacy to the customers.
6. The withdrawal of rupees is faster than bank, no need of standing long lines.
7. Maintenance cost is less as no bank staff is involved in transaction.
8. It also provides receipt for details of withdrawal of money and balance in account.


# Disadvantages

1. It cannot provide services in rural region in our country whereas banks are available in the villages.
2. Customers do not have proper knowledge of its operation so feel hesitate to use it.
3. If ATM card is lost, no withdrawal of rupees. There is possibility of misusing and hack the ATM card.
4. If dispense error in ATM machine, not received rupees but account will be debited.
5. Personal touch of customers-employee relation is missing.
6. Due to leakage of PIN, fraud can take place easily.
7.Initial cost of hardware, software, and installation site is very high.
8.Limitation of withdrawal of money.
