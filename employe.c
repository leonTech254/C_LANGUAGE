#include <stdio.h>

int PaymentFunc(int hoursWorked)
{
    if(hoursWorked>=30 && hoursWorked<=39)
    {
        return 5000;

    }else if(hoursWorked>=20 && hoursWorked<=29)
    {
        return 4000;
    }
    else if(hoursWorked>=10 && hoursWorked<=19)
    {
        return 1000;
    }
    else if(hoursWorked<=9)
    {
        return 500;
    }
}

int main()
{
  char name[100];
  int overtimeWorked;
  int hoursAbsent;
  int overtimeBonus;
  printf("WELCOME TO THE PAYMENT PROGRAM\nENTER THE EMPLOYEE NAME: ");
  scanf("%s", name);
  printf("ENTER OVERTIME HOURS WORKED: ");
  scanf("%d", &overtimeWorked);
  printf("ENTER HOURS ABSENT: ");
  scanf("%d", &hoursAbsent);
  overtimeBonus = (2.0/3.0) * hoursAbsent * overtimeWorked;

  printf("%s's SALARY: %d\n", name, PaymentFunc(overtimeBonus));

  return 0;
}
