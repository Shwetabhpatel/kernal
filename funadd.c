#include<stdio.h>
int a,b,c; //global variables

int calculateSum() //function to calculate sum
{
    printf("\n enter a ");
    scanf("%d",&a);

    printf("\n enter b ");
    scanf("%d",&b);

    printf("\n enter c ");
    scanf("%d",&c);

    return a+b+c;
}

void main()
{
    int result=calculateSum(); //function calling
    printf("\n Sum of numbers is : %d",result);
}