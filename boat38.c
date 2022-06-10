// using structure 


#include <stdio.h>
#include <string.h>


struct employee 
{
    int code;
    float salary;
    char name[10];
};  

int main()
{
    struct employee e1, e2;
    e1.code = 101;
    e1.salary = 3400.50;
    // e1.name = "raushan";
    strcpy(e1.name, "raushan");

printf("info of first employee is:\n code = %d\n salary = %f\nname = %s\n", e1.code, e1.salary, e1.name);
    e2.code = 102;
    e2.salary = 4000.50;
    strcpy(e2.name, "rishabh");
printf("info of second employee is:\n code = %d\n salary = %f\nname = %s\n", e2.code, e2.salary, e2.name);
return 0;
}