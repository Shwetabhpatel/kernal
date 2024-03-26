# include<stdio.h>
int a,b,i,gcd; //global variables

int hcf() // function for hcf or gcd
{
    for(i=1;i<=a && i<=b;i++) // for loop for multiple iterations
    {
        if(a%i==0 && b%i==0) //condition to store hcf or gcd
        {
            gcd=i;
        }
    }
    return gcd;
}

void main()
{
    printf("\n Enter first number ");
    scanf("%d",&a);

    printf("\n Enter second number ");
    scanf("%d",&b);

    hcf(); //function calling

    printf("GCD of %d and %d is : %d",a,b,gcd);
}