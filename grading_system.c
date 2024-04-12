#include<stdio.h>
void main()
{
    float score;
    printf("\n Enter students's score : ");
    scanf("%f",&score);  //inputting score

    if(score>=90 && score<=100)  //range of A grade
    {
        printf("\n A Grade"); 
    }

    if(score>=80 && score<90)   //range of B grade
    {
        printf("\n B Grade");
    }

    if(score>=70 && score<80)  //range of C grade
    {
        printf("\n C Grade");
    }

    if(score>=60 && score<70)  //range of D grade
    {
        printf("\n D Grade");
    }

    if(score<60)  //range of F grade
    {
        printf("\n F Grade");
    }
}