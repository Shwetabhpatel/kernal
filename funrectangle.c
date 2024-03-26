# include<stdio.h>

int a,b; //global variables
int area() //function for area calculation
{
    return a*b;
}
int perimeter()//function for perimeter calculation
{
    return 2*(a+b);
}

void main()
{
    printf("\n Enter length of rectangle ");//length input
    scanf("%d",&a);
    printf("\n Enter width of rectangle ");//width input
    scanf("%d",&b);

    int result1=area();//function calling for area
    printf("\n Area of rectangle is : %d",result1);//printing area

    int result2=perimeter();// function calling for perimeter
    printf("\n Perimeter of rectangle is : %d",result2);//printing perimeter
}