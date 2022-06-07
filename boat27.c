// swapping two numbers using pointer 


#include <stdio.h>
    
int main()
{
    // declaring the variables 
    int a,b,*i,*j, temp;

    // taking input of two numbers 
    printf("enter the value of first number:\n");
    scanf("%d", &a);
    printf("enter the value of second number: \n");
    scanf("%d", &b);

    // address allocation to the input numbers to a variable
    i = &a;
    j = &b;

    // swapping the two given numbers 
    temp = *j;
    *j = *i;
    *i = temp;

    printf("the values of given numbers after swapping:\n");
    printf("first number: %d\n", a);
    printf("the second number is: %d", b);


return 0;
}