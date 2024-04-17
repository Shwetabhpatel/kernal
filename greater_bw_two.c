#include<stdio.h>
void main()
{
    int a,b;
    printf("\n enter first number : ");//inputting first variable
    scanf("%d",&a);

    printf("\n enter second number : ");//inputting second variable
    scanf("%d",&b);

    if(a=b)//if a and b are equal
    {
        printf("\n %d and %d are equal",a,b);
    }

    else if(a>b)//if a is greater than b
    {
        printf("\n %d is greater",a);
    }
    else//if b is greater than a
    {
        printf("\n %d is greater",b);
    }

}