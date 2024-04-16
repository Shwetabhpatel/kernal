#include<stdio.h>
void main()
{
    char ch;
    printf("\n Enter any character : ");//inputting a character
    scanf("%c",&ch);

    if((ch>=32 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=126))//ASCII value range of special characters
    {
        printf("\n %c is special character",ch);//if the character is special character
    }
    else
    {
        printf("\n %c is not special character",ch);//if the character is not special character
    }
}