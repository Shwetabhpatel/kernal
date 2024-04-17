#include <stdio.h>

void main()
{
    char ch;//variable character

    printf("Enter any character: ");//inputting character
    scanf("%c", &ch);


    if((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122))//range of alphabets
    {
        printf("'%c' is alphabet character.", ch);//if character is alphabet
    }
    else 
    {
         printf("'%c' is not alphabet character.", ch);//if character is not alphabet
    }
    
}