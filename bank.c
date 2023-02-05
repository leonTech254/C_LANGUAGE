#include <stdio.h>
#include <string.h>

int TotalAmout=0;
int deposit=0;
int withdraw;
char name[100];
char password[100];

void CheckBal()
{
    char currPass[100];
    printf("\n\n\nCHECK BALANCE\nEnter password: ");
    scanf("%s",currPass);
    printf(password);
    if(currPass==password)
    {
        printf("BANK BALANCE IS %d",TotalAmout);
    }else
    {
        printf("WRONG PASWORD");
        CheckBal();
    }
}

void deposit_money()
{
    printf("ENTER AMOUNT TO DEPOSIT: ");
    scanf("%d", &deposit);
    TotalAmout += deposit;
    printf("DEPOSITED SUCCESSFULLY:\n BANK BALANCE %d\n", TotalAmout);
     CheckBal();
   
}

withDrawMoney()
{
    char question[10];
    char currPass[100];
    printf("\n\n\nCHECK BALANCE\nEnter password: ");
    scanf("%s",currPass);
    if(currPass==password)
    {
        printf("ENTER AMOUNT TO WITHDRAW: ");
        scanf("%d",withdraw);
        if(withdraw>TotalAmout)
        {
    printf("INSUFFICIENT FUND!!");
    printf("Hello %s, would you wish to deposit Money?(y=yes,n=no): ", name);
    scanf("%s", question);
    if(strcmp(question, "y") == 0 || strcmp(question, "yes") == 0)
    {
        deposit_funds();
    }
        }else
        {
        int balance=TotalAmout-withdraw;
        printf("BANK BALANCE IS %d",TotalAmout);
        }
      

    }else
    {
        printf("WRONG PASWORD");
        withDrawMoney();
    }

}

int main()
{
    
    int choice;
    printf("HELLO WELCOME TO KCB BANK\nCREATE AN ACCOUNT\nName: ");
    scanf("%s", name);
    printf("Password: ");
    scanf("%s", password);

    printf("ACCOUNT CREATED SUCCESSFULLY\n");
    printf("\n\nOUR MENU\n");
    char menu[100]="1.Withdraw money\n2.check balance\n3.deposit money";
    printf(menu);
    printf("\nchoice: ");
    
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        withDrawMoney();
        break;
        case 2:
        CheckBal();
        break;
        case 3:
        deposit_money();
        break;
    }
   
    return 0;
}
