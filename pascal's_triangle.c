#include <stdio.h>

void main()
 {
   int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: ");//inputting number of rows
   scanf("%d", &rows);

   for (i = 0; i < rows; i++)// Loop through each row of the triangle
    {
      for (space = 1; space <= rows - i; space++)  // Print spaces to align the triangle properly
       {
         printf("  ");
       }
      for (j = 0; j <= i; j++) // Calculate and print coefficients for each row
      {
         if (j == 0 || i == 0) // Calculate the coefficient using Pascal's triangle formula
         {
            coef = 1; // First and last coefficients are always 1
         } 
         else 
         {
            coef = coef * (i - j + 1) / j; // Calculate the coefficient based on the previous coefficient
         }
         printf("%4d", coef);
      }
      printf("\n");
   }
   
}