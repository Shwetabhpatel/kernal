#include<stdio.h>
void main()
{
    int start,end,i,j;
    printf("\n Enter start number of range : "); //inputting start point
    scanf("%d",&start);

    printf("\n Enter end number of range : ");  //inputting end point
    scanf("%d",&end);

    printf("\n Prime numbers in the given range are : ");
    
    for( i=start+1;i<=end-1;i++) //we are doing start +1  and end -1 because we have tp print in range excluding start and end
    {
       for( j=2;j<i;j++)
       {
        if(i%j==0)   // If the number is divisible by any number other than 1 and itself, it's not prime
        {
            break;
        }
       }
       if(i==j) //If the loop completed without finding a divisor (i.e., j == i), the number is prime
       {
        printf("%d ",i);
       }
    }
}