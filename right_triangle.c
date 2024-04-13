#include<stdio.h>
void main()
{
    int r;
    printf("\n Enter height of triangle : "); //inputting height of triangle
    scanf("%d",&r);

    for(int i=1;i<=r;i++)// loop to print rows 
    {
        for(int j=1;j<=i;j++) //loop to print columns
        {
            printf(" *"); //to print *
        }
        printf("\n"); //for new lines
    }
}