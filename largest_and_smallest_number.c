#include <stdio.h>

void main()
{
    int i = 1, n, largest, smallest, element;
    
    printf("Enter total number of elements: "); // Getting number of elements from the user
    scanf("%d", &element);

    printf("Enter first number: "); // inputting the first number 
    scanf("%d", &n);
    
    largest = smallest = n; // Initializing largest and smallest to the first number 
    
    while (i < element) // While loop of the remaining elements
    {
        printf("Enter another number: "); //  getting another number from the user
        scanf("%d", &n);
        
        if (n > largest) // Updating largest and smallest if necessary
            largest = n;
        if (n < smallest)
            smallest = n;
        
        i++; // continuing the loop till last element
    }
    
    printf("The largest number is %d\n", largest); // Printing the largest and smallest numbers found
    printf("The smallest number is %d\n", smallest);
}