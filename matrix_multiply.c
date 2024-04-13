#include<stdio.h>
void main()
{
    int r,c,i,j,k;  
    printf("\n enter  number of rows ");
    scanf("%d",&r);

    printf("\n enter  number of columns ");
    scanf("%d",&c);

    int m1[r][c],m2[r][c],m3[r][c];

    printf("\n Enter variables in m1 \n ");

    for(i=0;i<r;i++)   //for loop to input values in rows
    {
        for(j=0;j<c;j++)   //for loop to input values in column
        {
            scanf("%d",&m1[i][j]);
        }
        printf("\n");
    }

    printf("\n Matrix m1 is : \n");  //printing m1

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",m1[i][j]);
        }
        printf("\n");
    }

     printf("\n Enter variables in m2 \n"); 

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m2[i][j]);
        }
        printf("\n");
    }

     printf("\n Matrix m2 is : \n"); //printing m2

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",m2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)   // Initializing m3 to zero if not it will give garbage values after multiplication
     {
        for (j = 0; j < c; j++)
         {
            m3[i][j] = 0;
        }
    }

    printf("\n Value of M3 \n"); //multiplication of m1 and m2

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<r;k++)
            {
                m3[i][j] =  m3[i][j] + (m1[i][k]*m2[k][j]);  //logic to multiply
            }
        }
    }

     for(i=0;i<r;i++)    //printing m3 after multiplication of m1 and m2
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",m3[i][j]);
        }
        printf("\n");
    }

}