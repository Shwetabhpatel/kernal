#include<stdio.h>
void main()
{
    float c,f; // c = celsius  f = farenhiet
    int choice;

    printf("\n Select: \n 1. convert temperature from Celsius to Farenhiet \n 2. convert temperature from Farehiet to Celsius  ");
    scanf("%d",&choice); //select the choice

    switch(choice)
    {
        case 1:  //from celsius to farenhiet
        {
            printf("\n Enter temperature in Celsius : ");
            scanf("%f",&c);     

            f = (c*9/5)+32;  //formula to convert from celsius to farenhiet

            printf("\n %.3f degree Celsius = %.3f degree Farenhiet ",c,f);
        }
        break;

        case 2:  //from celsius to farenhiet
        {
            printf("\n Enter temperature in Farenhiet : ");
            scanf("%f",&f);     

            c = (f-32)*5/9;  //formula to convert from celsius to farenhiet

            printf("\n %.3f degree Farenhiet = %.3f degree Celsius ",f,c);

        }
        break;

        default: printf("\n Invalid input");
    }
}