#include<stdio.h>
void main()
{
    int students=20,Marks[20];

    printf("\n Enter marks for the 20 students ");

    for(int i=0;i<20;i++)
    {
        printf("\n Enter marks for student%d \n",i+1);
        scanf("%d",&Marks[i]);
    }

    printf("\n Marks of 20 students : ");
    for(int i=0;i<20;i++)
    {
        printf("\n Marks for student %d = %d",i+1,Marks[i]);
    }
}