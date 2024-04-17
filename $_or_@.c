#include <stdio.h>

void main()
{
    char ch;//variable character

    printf("Enter any character: ");//inputting character
    scanf("%c", &ch);


    if(ch==36)//ASCII value for $ is 36
    {
        printf("'%c' is '$' character.", ch);//if character is $
    }
    else  if(ch==64)//ASCII value for @ is 64
    {
        printf("'%c' is '@' character.", ch);//if character is @
    }
    else 
    {
         printf("'%c' is neither '$' nor '@'", ch);//if character is not $or @
    }
    
}