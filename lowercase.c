#include <stdio.h>

void main()
{
    char ch;//variable character

    printf("Enter any character: ");//inputting character
    scanf("%c", &ch);


    if(ch >= 97 && ch <= 122)//range of lowercase characters
    {
        printf("'%c' is lowercase character.", ch);//if character is lowercase
    }
    else 
    {
         printf("'%c' is not lowercase character.", ch);//if character is not lowercase
    }
    
}