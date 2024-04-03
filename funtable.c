#include<stdio.h>

int num,i;// global variables
int printMultiplicationTable() //function to print table
{
    int table;
    printf("\n Enter the number whose table you want to print ");
    scanf("%d",&num);

    for(i=1;i<=10;i++) //for loop to print table
    {
        printf("\n %d x %d = %d ",num,i,num*i);
    }
      
}

void main()
{
    printMultiplicationTable(); //function calling
} 