#include <stdio.h>

void main()
{
    char ch;//variable character

    printf("Enter any character: ");//inputting character
    scanf("%c", &ch);


    if(ch >= 65 && ch <= 90)//range of uppercase characters
    {
        printf("'%c' is uppercase character.", ch);//if character is uppercase
        ch=ch+32;//converting uppercase to lowercase
        printf("\nLowercase character is: %c", ch);
    }

}