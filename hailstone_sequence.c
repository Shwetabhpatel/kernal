#include <stdio.h>

void main()
 {
    int start, result;

    printf("Input a number: ");//inputting number
    scanf("%d", &start);

    while (start != 1) // Perform Hailstone sequence until the number becomes 1
     {  
        if (start % 2 == 0) // Calculating the next number in the Hailstone sequence
        {
            result = start / 2;
        } 
        else
         {
            result = 3 * start + 1;
        }

        printf("%d - ", start); // Print the current number in the sequence

        start = result;// Updating the current number to the next number in the sequence
    }

    printf("1\n");// Print the final number in the sequence, which is always 1
   
}