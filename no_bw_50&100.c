#include<stdio.h>
void main()
{
    int num;  
    printf("\n Enter  any number : ");//inputting number
    scanf("%d",&num);
    
    if(num>50 && num<100) //if number is between 50 & 100
    {
        printf("\n %d is between fifty and hundred",num); 
    }
    else //if number is not between 50 & 100
    {
        printf("\n %d is not between fifty and hundred",num); 
    }
}