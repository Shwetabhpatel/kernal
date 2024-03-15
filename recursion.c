#include<stdio.h>
int a;//global variable

int fact(int a)//function of factorial
{
    if(a==0){
    return 1;//so that result will not be zero
}
return a*fact(a-1); //for calculating factorial
}
void main()
{
    printf("\n Enter the number whose factorial you want to print :");
    scanf("%d",&a);//input a

    int result=fact(a);//function calling
    printf("Factorial of %d is :%d",a,result);//printing factorial of input number
}