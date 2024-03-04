#include<stdio.h>
void main()
{
    int num;
    printf("\n Enter number whose table you want to print :_");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
    {
        printf("\n %d X %d = %d ",num,i,num*i);
        
    }

}