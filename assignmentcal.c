#include<stdio.h>
void main()
{
  int option;
  float a,b;

  do{
    printf("\n Enter first number :  ");
    scanf("%f",&a);

    printf("\n Enter second number : ");
    scanf("%f",&b);

    printf("\n Press 1. Addition \n Press 2. Subtraction \n Press 3. Multiplication \n Press 4. Division \n Press 5. Exit");
    scanf("%d",&option);

    switch(option)
    {
      case 1:
      printf("\n Addition is : %f",a+b);
      break;

       case 2:
      printf("\n Subtraction is : %f",a-b);
      break;

       case 3:
      printf("\n Multiplication is : %f",a*b);
      break;

       case 4:
      printf("\n Division is : %f",a/b);
      break;

       case 5:
      printf("\n Exit");
      break;

      default:
      printf("\n Invalid option");
    }
  }while(option!=5);
}