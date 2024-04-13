#include <stdio.h>

void main()
{
    int base, exponent;
    long long power = 1; //we are using long long because result might out range ogf int
    int i;

    printf("Enter base: ");//Input base and exponent from user 
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i=1; i<=exponent; i++)  // Multiply base, exponent times
    {
        power = power*base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);//printing result

}