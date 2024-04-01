#include<stdio.h>
void main()
{
    int a; //local variable
    printf("Enter any number ");
    scanf("%d",&a);
    if(a<0) //if number is less than zero then -ve
    {
        printf("Negative number");
    }

    else if(a>0)//greater than zero +ve
    {
        printf("Positive number");
    }
    else 
    {
        printf("number is zero");
    }

}