#include<stdio.h>
void main()
{
    int a,b,step; //variable declaration
    
    printf("\n Enter the starting value of the series: ");//input starting value
    scanf("%d",&a);

    printf("\n END VALUE SHOULD BE GREATER THAN STARTING VALUE");
    printf("\n Enter the ending value of the series: ");//input ending value
    scanf("%d",&b);

     printf("\n STEP VALUE SHOULD NOT BE NEGATIVE OR ZERO");
    printf("\n Enter the step value of the series: ");//steps or gap in series
    scanf("%d",&step);

    printf("\n Series is : %d",a);//printing initial value in series

    while (a!=b && b>a)//while loop till end value
    {
        a+=step; //to increase the series
        printf(" %d",a);//continue printing the series
       
        if(a>b)
        {
              printf(" %d",b);
        }
        
    }
    
}