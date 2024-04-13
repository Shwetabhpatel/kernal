#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20]="Program";
    char str2[20]={'P','r','o','g','r','a','m','\0'};
    char str3[100] = "This is ";
    char str4[20];
    int result;

    printf("\n -----Using strlen function-------\n");

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(str1));//In “%zu” format, z is a length modifier and u stand for unsigned type.
    printf("Length of string b = %zu \n",strlen(str2));

    printf("\n ------Using strcat function--------\n ");
   
    strcat(str3, str1); // concatenates str3 and str1

    puts(str3);
    puts(str1); // the resultant string is stored in str1

    printf("\n --------Using strcpy function--------\n ");
   
    strcpy(str4, str1); // copying str4 to str1
    puts(str4); //  program

  
    printf("\n --------Using strcmp function--------\n ");
    result = strcmp(str1, str2);// comparing strings str1 and str2
    printf("strcmp(str1, str2) = %d\n", result);

  
    result = strcmp(str1, str3); // comparing strings str1 and str3
    printf("strcmp(str1, str3) = %d\n", result);

}