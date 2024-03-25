# include<stdio.h>
# include<string.h>

struct address  //structure for employee's address
{
    char area[30];
    char street[30];
    int pincode;
};

struct employee //structure for employee's details
{
    char name[20];
    int age;
    char dept[10];

};

void main()
{
    struct employee e; //calling employee structure
    strcpy(e.name,"Rohan");
    e.age=27;
    strcpy(e.dept,"IT");

    struct address a;//calling address structure
    strcpy(a.area,"Bhawarkua");
    strcpy(a.street,"Bholaram Ustaad Marg");
    a.pincode=452001;

printf("\n Employee's name is %s",e.name); //printing details
printf("\n Employee's age is %d",e.age);
printf("\n Employee's department is %s",e.dept);
printf("\n Employee's address is : %s,%s,%d",a.street,a.area,a.pincode);

}