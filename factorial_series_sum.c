#include <stdio.h>

void main()
 {
    double num, sum = 0, factorial = 1;
    int i;

    printf("\nEnter the number till you want to add series : ");// inputting the value
    scanf("%lf", &num);

    for (i = 1; i <= num; i++) // for loop till the number value
    {
        factorial *= i; // Calculating factorial
        sum += i / factorial; // Adding each term to the sum
    }

    printf("\nSum of the above series = %lf\n", sum);// printing the sum of the series

}