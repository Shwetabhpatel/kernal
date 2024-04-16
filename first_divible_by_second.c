#include<stdio.h>
void main()
{
    int num1,num2;  
    printf("\n Enter first number : ");//inputting first number
    scanf("%d",&num1);

    printf("\n Enter second number : ");//inputting second number
    scanf("%d",&num2);
    
    if(num1%num2==0) //condition for number1 divisible by number2
    {
        printf("\n %d is divisible by %d",num1,num2); //printing number1 divisible by number2
    }
    else{
        printf("\n %d is not divisible by %d",num1,num2); //printing number1 is not divisible by number2
    }
}