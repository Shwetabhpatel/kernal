# include<stdio.h>
void main()
{
    for(int i=5;i<=100;i=i+5)//loop to print number series of multiple of 5
    {
        if(i%9==0)//condition to break from loop is whenever multiple of 9 is appear
        {
            break;
        }
        printf("\n %d",i);
    }
}