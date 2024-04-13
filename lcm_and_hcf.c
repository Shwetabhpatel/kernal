#include<stdio.h>

void main()
{
    int num1, num2, hcf, lcm, i;

    printf("Enter first number: "); //  inputting the first number
    scanf("%d", &num1);

    
    printf("Enter second number: "); //   inputting the second number
    scanf("%d", &num2);

    for (i = 1; i <= num1; i++) // Finding HCF or GCD of the two numbers
     {
        if (num1 % i == 0 && num2 % i == 0)
         {
            hcf = i; // Update HCF whenever both numbers are divisible by 'i'
         }
    }

    lcm = (num1 * num2) / hcf;// Calculate the least common multiple (LCM) using the formula: LCM = (num1 * num2) / HCF

    printf("HCF = %d and LCM = %d", hcf, lcm); // Display the calculated HCF and LCM

}