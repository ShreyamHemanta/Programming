/*Write a C program to assign values to each member of the following structure. Pass 
the populated structure to a function Using call-by-value and another function using 
call-by-address and print the value of each member of the structure.
struct student_info{
int roll_no;
char name[50];
float CGPA;
struct dob age;
};*/

#include <stdio.h>

struct dob {
    int day;
    int month;
    int year;
};

struct student_info {
    int roll_no;
    char name[50];
    float CGPA;
    struct dob age;
};

// Function to print student information using call-by-value
void printStudentInfoByValue(struct student_info student) {
    printf("Roll No: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("CGPA: %.2f\n", student.CGPA);
    printf("Age: %d/%d/%d\n", student.age.day, student.age.month, student.age.year);
}

// Function to print student information using call-by-address
void printStudentInfoByAddress(struct student_info *studentPtr) {
    printf("Roll No: %d\n", studentPtr->roll_no);
    printf("Name: %s\n", studentPtr->name);
    printf("CGPA: %.2f\n", studentPtr->CGPA);
    printf("Age: %d/%d/%d\n", studentPtr->age.day, studentPtr->age.month, studentPtr->age.year);
}

int main() {
    struct student_info student1 = {101, "John Doe", 3.75, {15, 8, 2000}};

    printf("Printing student information using call-by-value:\n");
    printStudentInfoByValue(student1);

    printf("\nPrinting student information using call-by-address:\n");
    printStudentInfoByAddress(&student1);

    return 0;
}
