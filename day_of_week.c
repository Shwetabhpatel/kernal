#include<stdio.h>
void main()
{
    int day;
    printf("\n Enter number of day : ");
    scanf("%d",&day);  //inputting number of day
    
    switch(day)   //switch case to choose from 1 to 7 for Sunday to Saturday
    {
        case 1:
        {
          printf("\n Sunday");  
        }
        break;

         case 2:
        {
          printf("\n Monday");  
        }
        break;

         case 3:
        {
          printf("\n Tuesday");  
        }
        break;

         case 4:
        {
          printf("\n Wednesday");  
        }
        break;

         case 5:
        {
          printf("\n Thursday");  
        }
        break;

         case 6:
        {
          printf("\n Friday");  
        }
        break;

         case 7:
        {
          printf("\n Saturday");  
        }
        break;  //if user chooses any number except 1 to 7

        default: printf("\n Invalid input..Please choose between 1 to 7");
    }
}