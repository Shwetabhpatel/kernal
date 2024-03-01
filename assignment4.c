#include<stdio.h>
void main()
{
    int option;
    float a,b;
    printf("\n Enter first number");
    scanf("%f",&a);

    printf("\n Enter second number");
    scanf("%f",&b);

    printf("\n Press 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division ");
     scanf("%d",&option);

     switch(option)
     {
        case 1:
        printf("\n Addition is %f",a+b);
        break;

        case 2:
        printf("\n Subtraction is %f",a-b);
        break;

        case 3:
        printf("\n Multiplication is %f",a*b);
        break;

        case 4:
        printf("\n Division is %f",a/b);
        break;

        default:
        printf("\n Invalid option");
        break;
     }
    
}