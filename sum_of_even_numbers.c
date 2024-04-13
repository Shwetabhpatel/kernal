#include<stdio.h>
void main()
{
    int first,second,i,sum=0;

    printf("\n enter first number : "); //inputing first number
    scanf("%d",&first);

     printf("\n enter second number : "); //inputing second number
    scanf("%d",&second);

    for(i=first+1;i<second;i++) //for loop between first and second number
    {
        if(i%2 == 0) //condition for even number
        {
            sum += i;  //to calculate sum of even numbers
        }
    }
     printf("\n Sum of even numbers between %d and %d is : %d",first,second,sum);//printing the sum

}