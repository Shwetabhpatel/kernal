#include<stdio.h>
void main()
{
    int age;
    char nationality;

    printf("\n Enter first letter of your nation : ");//inputting first letter of your nation

    scanf("%d",&nationality);

    if(nationality=='I' || nationality=='i') //if input letter is "I"" or ""i"" then it will print you are Indian

    {
        printf("\n You are Indian");

        printf("\n Enter your age : ");//inputting age
        scanf("%d",&age);
        if(age>=18)// if age is greater than or equal to 18 then it will print you are eligible for voting

        {
            printf("\n You are eligible for voting");
        }
        else//if age is less than 18 then it will print you are not eligible for voting

        {
            printf("\n You are not eligible for voting");
        }
    }
    else
    {
        printf("\n You are not Indian");
    }
}