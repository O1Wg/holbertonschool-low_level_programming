#include <stdio.h>

int main(void)
{
  int choice;
  int a;
  int b;

    while(1)
   {
    printf("Simple calculator\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
    printf("Choice: ");
 
     if (scanf("%d",  &choice) != 1)
     break;
     if (choice == 0)
     {
        printf("Bye!\n");
         return (0);
     }
     if  (choice == 1)
{
    /* add */
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);
   printf("&d + &d = %d\n", a, b, a + b);
}
   else if (choice == 2)
{
    /* Subtract */
   printf("Enter two numbers: ");
   scanf("&d &d", &a, &b);
   printf("&d - &d = %d\n", a,b, a - b);
}
   else if (choice == 3)
{
     /* Multiply */
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);
   printf("%d * %d = %d\n" , a, b, a *b);
}
   else if (choice == 4)
{
    /* divide */
   printf("Enter two numbers: ")
   scanf("&d &d", &a, &b);
   printf("&d / &d = %d\n", a,b, a / b);
}
     if (choice < 0 || choice > 4)
        printf("Invalid choice\n");
    }
   return (0);
}
