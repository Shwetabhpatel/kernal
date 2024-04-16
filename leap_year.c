#include<stdio.h>
void main()
{
    int year;  
    printf("\n Enter  any year : ");//inputting year
    scanf("%d",&year);
    
    if(year%4==0) //condition for leap year
    {
        printf("\n %d is leap year",year); //printing year is leap
    }
    else
    {
       printf("\n %d is not leap year",year); //printing year is not leap
    }
}