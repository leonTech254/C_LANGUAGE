#include <stdio.h>
#include <stdbool.h>

char *marksFunc(int marks)
{
  if (marks >= 0 && marks <= 39)
  {
    return "F";
  }
  else if (marks >= 50 && marks <= 59)
  {
    return "D";
  }
  else if (marks >= 60 && marks <= 69)
  {
    return "C";
  }
  else if (marks >= 70)
  {
    return "A";
  }
}
int main()
{
  char subject;
  int marks;
  printf("WELCOME TO OUR PROGRAM\nENTER THE SUBJECT: ");
  scanf("%s", &subject);
  printf("ENTER MARKS: ");
  scanf("%d", &marks);

  printf("Grade: %s\n", marksFunc(marks));

  return 0;
}
