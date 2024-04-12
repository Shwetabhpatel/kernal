#include<stdio.h>
void main()
{
    float amount,price;
    printf("\n Enter price of the product : "); //inputting price of product
    scanf("%f",&price);

    printf("\n Enter amount to buy the product : "); //inputting amount
    scanf("%f",&amount);

    if(price == amount)//if price is equal to amount purchase is successfull
    {
        printf("\n Purchase is sucessfull...");
    }

    else if(price < amount)//if amount is more than price change is returned
    {
        printf("\n Purchase is sucessfull. Here is your change.");
    }

    else//if amount is less than price then purchase is unsuccessfull
    {
        printf("\n Purchase is unsuccessfull. Please provide more amount.");
    }
}