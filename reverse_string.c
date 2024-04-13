#include <stdio.h>

void main() {
    int size,i;
    char temp;

    printf("Enter the size of the string: ");//input size of string
    scanf("%d", &size);

    char arr[size]; //character  arry = string
     
     printf("\n Enter characters in string : \n");// inputting characters in string
    for (i = 0; i < size; i++) 
    {
        scanf(" %c", &arr[i]);
    } 
    printf(" string is : ");//printing string
     for (i = 0; i < size; i++) 
    {
        printf(" %c", arr[i]);
    }
    int end =size -1;  //because indexing starts from zero
      for(i = 0; i<size/2  ; i++)
      {
        temp = arr[i];   //storing characters of different indices in temp in the loop
        arr[i]= arr[end]; //reversing the string
        arr[end] = temp;
        end--;

      }

    printf("\n Reversed string is : \n");//printing reverse string
    for( i=0 ; i<size; i++)
    {
        printf(" %c",arr[i]); //printing reverse string
    }
    
}