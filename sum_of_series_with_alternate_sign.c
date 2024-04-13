#include<stdio.h>

void main()
{
    int n, i;
    printf("\nEnter number till you want the series : ");
    scanf("%d", &n);

    int sum = 0;

    for(i = 1; i <= n; i++)// Loop through each number from 1 to n 
    {
        if (i % 2 != 0) // If  i is odd, add it to the sum
        {
            sum = sum + i;
        }
        // If  i is even, subtract it from the sum
        else
        {
            sum = sum - i;
        }
    }

    printf("\nThe sum is : %d", sum);// Display the sum

}