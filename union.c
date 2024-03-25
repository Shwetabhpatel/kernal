#include<stdio.h>
#include<string.h>

union employee // union for employee's details
{
    int id;
    char name[20];
    float salary;
    char dept[10];
};
void main()
{
    union employee e; //calling union
    printf("\n total size taken by union is %d",sizeof(e)); //size of union

    e.id=101;
    printf("\n employee's id is : %d",e.id); //printing details

    strcpy(e.name,"Rohan");
    printf("\n employee's name is : %s",e.name);

     e.salary=20000;
    printf("\n employee's id is : %f",e.salary);

    strcpy(e.dept,"IT");
     printf("\n employee's id is : %s",e.dept);

}