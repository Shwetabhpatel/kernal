#include<stdio.h>
int a; // global variable declaration
int square(int a)// function to calculate square
{
    return(a*a);
}

void main()
{
    printf("\n Enter the number whose square you want to calculate :"); // input the number
    scanf("%d",&a); 

    int result=square(a);
    printf("\n  Square of %d is : %d",a,result);// square of number
}