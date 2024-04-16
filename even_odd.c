
#include<stdio.h>
void main()
{
    int num;  
    printf("\n Enter  any number : ");//inputting number
    scanf("%d",&num);
    
    if(num%2==0) //condition for even number
    {
        printf("\n %d is even",num); //printing even
    }
    else{
        printf("\n %d is odd",num);  //printing odd
    }
}
