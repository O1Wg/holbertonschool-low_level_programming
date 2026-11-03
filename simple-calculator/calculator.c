#include <stdio.h>

/*
 * main - A simple calculator that adds, subtracts, multiplies and divides
 *
 * Return: Always 0 (Success)
 */
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
     if  (choice < 1 || choice > 4)
     {
	     printf("Invalid choice\n");
	     continue;
     }
 	if (result == EOF)
		return (0);
	clear_input();
	printf("Invalid choice\n")
		result = scanf("%d %d", &a, &b);

     printf("Enter two numbers: ");
     if (scanf("%d %d", &a, &b) != 2)
	     break;
		    
	 if(choice == 1)
		 printf("%d +%d =%d\n", a,b, a + b);
	 else if (choice ==2)
		 printf("%d - %d = %d\n", a, b, a - b);
	 else if (choice == 3)
		 printf("%d * %d = %d\n", a, b, a * b);
	 else if (b ==0)
			printf("Error: cannot divide by zero\n");
	 else
		 printf("%d / %d = %d\n", a, b, a / b);
   }
    return (0);
}
