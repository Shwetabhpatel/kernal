# include<stdio.h>
# include<string.h>

union boy //union declaration
{
    char name[20];
    int age;
};
void main()
{
    union boy b; //calling union
    printf("\n Size of union is %d",sizeof(b)); //for getting size of union

    strcpy(b.name,"Shwetabh");
    printf("\n Name is : %s",b.name);

    b.age=28;
    printf("\n Age is : %d",b.age);
}