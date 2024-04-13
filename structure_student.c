#include <stdio.h>
#include <string.h>

struct student // structure named student
{
    int roll_number;  // integer to store roll number
    char name[20];    // character array to store name
    float marks;      // float to store marks
};

void main()
{
    int size; // variable to store the number of students

    printf("\n how many students are there? "); // inputting the number of students
    scanf("%d", &size);

    struct student s[size]; // reference variable of structure

    for (int i = 0; i < size; i++) // Loop to input data for each student
    {
        printf("\n enter student's name : "); // inputting student's name
        scanf("%s", &s[i].name); 

        printf("\n enter student's roll number : "); // inputting student's roll number
        scanf(" %d", &s[i].roll_number);

        printf("\n enter student's marks : "); // inputting student's marks
        scanf("%f", &s[i].marks);

        printf("\n next student \n");
    }

    for (int i = 0; i < size; i++) // Loop to display data of each student
    {
        printf("\n student's name is : %s ", s[i].name);
        printf("\n student's roll number is : %d ", s[i].roll_number);
        printf("\n student's mark is : %f ", s[i].marks);
    }
}