# include<stdio.h>
void main()
{
    long start,end,original,remainder,result;

    printf("\n Enter start number of range : "); //inputting start point of range
    scanf("%ld",&start);

    printf("\n Enter end number of range : "); //inputting end point of range
    scanf("%ld",&end);

    printf("\n Armstrong numbers in the given range are : ");

    for (long i=start;i<=end;i++)  //for loop within range
    {
        original=i; //storing value of i in original
        result=0;  //initializing result to zero
        
        while(original!=0) //while loop to extract value from original 
        {
            remainder=original%10;
            original=original/10;
            result=result+(remainder*remainder*remainder);
        }
        if(result==i)  // If the sum of cubes of digits is equal to the original number, print the number as an Armstrong number.
        {
            printf("\n %ld ",i);
        }
    }
    printf("\n");
    
}