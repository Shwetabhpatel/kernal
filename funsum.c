#include<stdio.h>

int a,b;

int printsum() //function to enter and add integers
{  
    printf("\n Enter value of a ");
    scanf("%d",&a);

    printf("\n Enter value of b ");
    scanf("%d",&b);
    return (a+b);   
}

int main()
{
    int sum(); //function calling
    int result = printsum();
    printf("\n Sum is : %d",result); //printing sum
}