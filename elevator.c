#include<stdio.h>
void main()
{
    int current,destination;//variables for current and destination for
    printf("\n Enter current floor :");
    scanf("%d",&current);

    printf("\n Floor you want to go :");
    scanf("%d",&destination);

    if(current<destination)//to go up
    {
        for(int i=current+1;i<=destination;i++)//current +1 because we have to go to nextfloor
        {
            printf("\n floor %d",i);//printing floor number
        }
    }
    else
    {
        for(int i=current-1;i>=destination;i--)//current-1 because we have to go down
        {
             printf("\n floor %d",i);
        }
    }
}