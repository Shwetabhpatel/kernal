#include<stdio.h>

calculateInvoice(float price,float quantity)//function for calculating amount
{
    float amount=price*quantity;
    return amount;
}
void main()
{
    float a,b;//actual parameters
    
    printf("\n Enter price of item :");
    scanf("%f",&a);

    printf("\n Enter quantity of item :");
    scanf("%f",&b);

    float total=calculateInvoice(a,b);//function calling
    printf("\n Total amount is :%f",total);

    float tax, total1;
    printf("\n Enter the tax percent :");
    scanf("%f",&tax);

    float tax_amount=(total*tax)/100;//calculating tax
    total1=tax_amount+total;//calculating amount including tax

    printf("/n Total amount including tax is : %f",total1);

    float discount,discountrate;
    printf("\n Enter discount percentage : ");
    scanf("%f",&discount);

    discountrate=(total1*discount)/100;//calculating discount rate
    float final = total1-discountrate;//calculating final price

    printf("\n Final price is : %f",final);
}