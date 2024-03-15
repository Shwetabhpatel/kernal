#include<stdio.h>
void main()
{
    float a,b;
    char op;

    printf("\n Input first number : ");
    scanf("%f",&a);

    printf("\n Input second number : ");
    scanf("%f",&b);

    printf("\n Press '+' for  Addition \n Press '-' for  Subtraction \n Press '*' for  Multiplication \n Press '/' for  Division");
    scanf(" %c,&op");

    switch(op)
    {
        case '+':
        printf("\n Addition is : %f",a+b);
        break;

         case '-':
        printf("\n Subtraction is : %f",a-b);
        break;

         case '*':
        printf("\n Multiplication is : %f",a*b);
        break;

         case '/':
        printf("\n Division is : %f",a/b);
        break;

         default: 
         printf("\n Invalid input");
    }

}