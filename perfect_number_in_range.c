#include<stdio.h>
void main()
{
    int start,end,i,j,sum;
    printf("\n Enter start point of range :");
    scanf("%d",&start);

    printf("\n Enter end point of range :");
    scanf("%d",&end);

    for(i=start;i<=end;i++) //for loop from start to end point
{
    sum = 0; //initializing sum fro zero
    for(j=1;j<i;j++)
    {
        if(i%j==0)  //perfect number=integer that is equal to the sum of its positive proper divisors, that is, divisors excluding the number itself.
        {
            sum += j; 
        }
    }
    if(sum==i) 
    {
        printf("\n %d",i);//printing perfect number within range
    }
}

}