#include<stdio.h>
void main()
{
    int current,destination;
    printf("\n Enter current floor :");
    scanf("%d",&current);

    printf("\n Floor you want to go :");
    scanf("%d",&destination);

    if(current<destination)
    {
        for(int i=current+1;i<=destination;i++)
        {
            printf("\n floor %d",i);
        }
    }
    else
    {
        for(int i=current-1;i>=destination;i--)
        {
             printf("\n floor %d",i);
        }
    }
}