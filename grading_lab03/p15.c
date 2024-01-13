#include <stdio.h>

void swap (int *n1, int *n2)
{
  int temp;
  temp = *n2;
  *n2 = *n1;
  *n1 = temp;
}

void main ()
{
  /* Declaration of variables used within this program. */
  int num1, num2;

  /* Take input from the user and save it to the first variable. */
  printf("Enter first number:\n");
  scanf ("%d", &num1);

  /* Take input from the user and save it to the second variable. */
  printf("Enter second number:\n");
  scanf ("%d", &num2);

  /* Printing the use input before swapping. */
  printf("\nBefore Swapping\n");
  printf("First number: %d\n", num1);
  printf("Second number: %d\n\n", num2);

  /* Swapping the variables. */
  swap (&num1, &num2);

  /* Printing the variables after the swapping. */
  printf("\nAfter Swapping\n");
  printf("First number: %d\n", num1);
  printf("Second number: %d\n\n", num2);
}
