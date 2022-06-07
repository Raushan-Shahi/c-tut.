//Write a program to store information of a student using structre


#include <stdio.h>
#include <string.h>   
typedef struct student
{
    int roll;
    char name[100];
    char sec;
    int sub_sec;
    float marks;
} stud ;



int main()
{

    stud s1;
    printf("enter the details of the student:\n");
    printf("enter student ID\n");
    scanf("%d", s1.roll);
    printf("enter the section:\n");
    scanf("%c", s1.sec);
    printf("enter sub section:\n");
    scanf("%d", s1.sub_sec);
    printf("enter the marks of the student in CSP");
    scanf("%f", s1.marks);
    printf("enter student name:\n");
    scanf("%s", s1.name);

return 0;
}