#include <stdio.h>

int main() {
    float marks1, marks2, marks3, marks4, marks5;
    float total, percentage;
    
   
    printf("Enter marks for each subject:\n");       // Input marks for each subject
    printf("Subject 1: ");
    scanf("%f", &marks1);

    printf("Subject 2: ");
    scanf("%f", &marks2);

    printf("Subject 3: ");
    scanf("%f", &marks3);

    printf("Subject 4: ");
    scanf("%f", &marks4);

    printf("Subject 5: ");
    scanf("%f", &marks5);
    
    
    total = marks1 + marks2 + marks3 + marks4 + marks5;      // Calculate total marks
    
    
    percentage = total / 5;     // Calculate percentage
    
   
    printf("Percentage: %.2f%%\n", percentage);     // To show grade.

    if (percentage >= 75 && percentage <= 100) 
    {
        printf("Grade: A\n");

    } 
    else if (percentage >= 60 && percentage < 75) 
    {
        printf("Grade: B\n");

    } 
    else if (percentage >= 50 && percentage < 60) 
    {
        printf("Grade: C\n");

    } 
    else if (percentage >= 33 && percentage < 50) 
    {
        printf("Grade: D\n");

    } 
    else 
    {
        printf("Grade: Fail\n");
    }
    
    return 0;
}