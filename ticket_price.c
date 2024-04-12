#include<stdio.h>
void main()
{
    int age;
    float time;

    printf("\n Welcome to the Movie Theatre");//welcome message

    printf("\n Enter age : "); //inputting age
    scanf("%d",&age);

    printf("\n Enter showtime : "); //inputting time
    scanf("%f",&time);

    if(age < 12 && time <5) //if age is less than 12 and showtime is less than 5 pm
    {
        printf("\n Price of ticket is $7 .");
    }

    else if(age >= 12 && time <5) //if age is equal or greater than 12 and showtime is less than 5 pm
    {
        printf("\n Price of ticket is $10 .");
    }
    else
    {
        printf("\n Price of ticket is $12 .");
    }
}