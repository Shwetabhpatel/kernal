#include<stdio.h>
//function to calulate area of rectangle
int rectangle(int x, int y)//formal parameters:x and y
{
    int area;
    area=x*y;
    return area;
}

void main()
{
    int a,b;
    printf("\n Enter length of rectangle : ");//input lenght
    scanf("%d",&a);

    printf("\n Enter width of rectangle : ");//input width
    scanf("%d",&b);

    int result=rectangle(a,b);//function calling
    printf("\n Area of rectangle is : %d",result);// area of rectangle
}