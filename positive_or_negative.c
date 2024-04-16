#include<stdio.h>
void main()
{
    int num;  
    printf("\n Enter  any number : ");//inputting number
    scanf("%d",&num);
    
    if(num>0) //condition for positive number
    {
        printf("\n %d is positive number",num); //printing positive number
    }
    else if(num==0)
    {
        printf("\n number is zero");  //if number is zero
    }
    else
    {
        printf("\n %d is negative number",num); //printing negative number
    }
}