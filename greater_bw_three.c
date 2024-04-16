#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n enter first number : ");//inputting first number
    scanf("%d",&a);

    printf("\n enter second number : ");//inputting second number
    scanf("%d",&b);

     printf("\n enter third number : ");//inputting third number
    scanf("%d",&c);

    if(a>b && a>c)//if a is greater
    {
        printf("\n %d is greater",a);
    }

    else if(b>a && b>c)//if b is greater
    {
          printf("\n %d is greater",b);
    }

    else if(c>a && c>b)//if c is greater
    {
         printf("\n %d is greater",c);
    }
    else//if all are equal
    {
        printf("\n all are equal");
    }

}