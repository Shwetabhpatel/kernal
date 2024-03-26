# include<stdio.h>
int num,original,reversed=0,remainder; //global variables

int palindrome() //function for reversing number for palindrome
{
    while(num!=0)
    {
        remainder=num%10;
        reversed=(reversed*10)+remainder;
        num/=10;
    }
    return reversed;
}
void main()
{
    printf("\n Enter any number");
    scanf("%d",&num);

    original=num; //storing value of num
    palindrome();//function calling
   
    if(original==reversed) //checking whether function is palindrome or not
    {
        printf("\n Palindrome number");
    }
    else
    {
        printf("\n Not a palindrome number");
    }
}