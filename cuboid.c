#include<stdio.h>
//function to volume of cuboid
int cuboid(int x, int y, int z)//formal parameters:x , y and z
{
    int volume;
    volume=x*y*z;
    return volume;
}

void main()
{
    int a,b,c;
    printf("\n Enter length of cuboid : ");//input lenght
    scanf("%d",&a);

    printf("\n Enter width of cuboid : ");//input width
    scanf("%d",&b);

    printf("\n Enter height of cuboid : ");//input height
    scanf("%d",&c);

    int result=cuboid(a,b,c);//function calling
    printf("\n Volume of cuboid is : %d",result);// printing volume if cuboid
}