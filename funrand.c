#include <stdio.h>   
#include <stdlib.h> // headerfile to use rand function 

int Random()//function to generate random number
 {

    return rand() % 100;  //rand function to generate random number, %100 to print between 1 to 100
}

void main() 
{
    
    int result = Random();//function calling
    printf("\n Random number between 1 and 100: %d",result);
    
}