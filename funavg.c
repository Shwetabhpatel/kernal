#include<stdio.h>

float num1,num2; //global variables
float avg() //function to enter and calculate average of  two numbers
{
    printf("\n Enter first number ");
    scanf("%f",&num1);

    printf("\n Enter second number ");
    scanf("%f",&num2);

    return (num1+num2)/2;
}

void main()
{
    float result = avg(); //function calling
    printf("\n Average of numbers is : %f",result);//printing average
}