#include <stdio.h>

void main() {
    int size,i,temp;

    printf("Enter the size of the array: ");//input size of arry
    scanf("%d", &size);

    int arr[size];
     
     printf("\n Enter values in arry :");//values in arry
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    } 
    printf("\n Arry is : \n");//printing arry
     for (i = 0; i < size; i++) 
    {
        printf(" %d", arr[i]);
    }
    int end =size -1;  //because arry start from zero
      for(i = 0; i<size/2  ; i++)
      {
        temp = arr[i];
        arr[i]= arr[end];//for reverse arry
        arr[end] = temp;
        end--;

      }

    printf("\n Reversed arry is : ");//printing reverse arry
    for( i=0 ; i<size; i++)
    {
        printf(" %d",arr[i]);
    }
    
}