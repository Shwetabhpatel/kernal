#include<stdio.h>
#include<string.h>

union student  // union named student
{
   int roll_number;  // integer to store roll number
   char name[20];    // character array to store name
   float marks;      // float to store marks
};

void main()
 {
    int size;  // variable to store the number of students
    printf("\nEnter number of students: ");
    scanf("%d", &size);

    union student s[size];  // reference variable of union


    for(int i = 0; i < size; i++) // Loop to input and print name of each student
    {
        printf("\nEnter student's name: ");
        scanf("%s", s[i].name);
        printf("student's name is: %s", s[i].name);
    }

    for(int i = 0; i < size; i++) // Loop to input and print roll number each student
    {
        printf("\nEnter students's roll number: ");
        scanf("%d", &s[i].roll_number);
        printf("student's roll number is: %d", s[i].roll_number);
    }

    for(int i = 0; i < size; i++) // Loop to input and print marks of each student
    {
        printf("\nEnter student's mark: ");
        scanf("%f", s[i].marks);
        printf("student's mark is: %f", s[i].marks);
    }

}