#include<stdio.h>
void main()
{
    int num;  
    printf("\n Enter  any number : ");//inputting number
    scanf("%d",&num);
    
    if(num%75==0) //condition for number divisible by 75
    {
        printf("\n %d is divisible by 75",num); //printing  divisible by 75
    }
    else{
        printf("\n %d is not divisible by 75",num); //printing not divisible by 75
    }
}