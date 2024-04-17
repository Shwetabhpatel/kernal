# include<stdio.h>
void main()
{
    char ch; //variable character

    for(int i=91;i<=96;i++) //ASCII value from 91 to 96
    {
        printf("\n character of ASCII value %d is ",i);//printing number of ASCII value
        ch=i;
        printf("%c",ch);//printing character
    }
}