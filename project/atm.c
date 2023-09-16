#include<stdio.h>
#include<windows.h>
#include<time.h>

int main(){

    int pin=1234,option,enteredPin,count=0,amount=1;
    float balance=5000;
    int continueTransaction=1;

    time_t now;
    time(&now);
    printf("\n");
    printf(" \t\t\t\t\t       %s",ctime(&now));
    printf("\n\t\t\t=========================Welcome to HDFC bank ATM=======================");

    while(pin  != enteredPin){

        printf("\nPlease enter you pin : ");
        scanf("%d",&enteredPin);
        if(enteredPin != pin){
            Beep(610,500);
            printf("Invalid pin!!!");
        }
        count++;
        if(count==3 && pin != enteredPin){
            exit(0);

        }
    }
     while(continueTransaction != 0){

printf("\n\t\t\t================*Availble Transactions*==============");
        printf("\n\n\t\t 1.Withdrawl");
        printf("\n\t\t 2.Deposit" );
        printf("\n\t\t 3.Check Balance" );
        printf("\n\n\tPlease select the option : " );
        scanf("%d",&option);
        switch(option)

case 1:
while(amount % 500 != 0){

        printf("\n\tEnter the amount : ");
        scanf("%d",&amount);
        if(amount % 500 != 0)
        {
            printf("\n\t The amount should be multiple of 500");

        }
        if(balance < amount ){
            printf("\n\t Sorry insufficient balance");
            amount =1;
            break;


        }

        else{
            balance -= amount;
            printf("\n\t\t You have withdrawn Rs.%d. Your new balance is %.2f",amount,balance);
            printf("\n\n\n\t\t===========*Thank you for banking with us : HDFC BANK*===========");
            amount =1;
            break;

        }


        case 2 : 
        printf("\n\t\t Please enter the amount : ");
        scanf("%d",&amount);
        balance += amount;
        printf("\n\t\tYou have deposited Rs.%d. Your new balance is %.2f",amount,balance);
        printf("\n\n\n\t\t===========*Thank you for banking with us : HDFC BANK*===========");
        amount=1;
        break;


case 3:
printf("\n\t\t Your balance is Rs.%.2f",balance);
break;

    
default:
Beep(610,500);

printf("\n\t\t envalid option!!!");
break;
}


printf("\n\t\t Do you wish you perform another transactrion ?Press 1[Yes], 0[No]");

scanf("%d",&continueTransaction);

     }
}