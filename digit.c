#include <stdio.h>

void main()
{
    char ch;//variable character

    printf("Enter any character: ");//inputting character
    scanf("%c", &ch);


    if(ch >= 48 && ch <= 57)//range of digit
    {
        printf("'%c' is digit character.", ch);//if character is digit
    }
    else 
    {
         printf("'%c' is not digit character.", ch);//if character is not digit
    }
    
}