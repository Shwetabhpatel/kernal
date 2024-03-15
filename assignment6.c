#include<stdio.h>
void main()
{
    for(int i=1;i<=100;i++) //for loop from 1 to 100
    {
        if(i%3==0) //check if number is a multiple of 3 or divisible by 3
        {
            continue; //skip printing if divisible by 3
        }
        printf("\n %d",i); //print numbers
    }
    
}