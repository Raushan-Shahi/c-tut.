#include <stdio.h>
    
int main()
{
    // declaring required variables 
    int a,cube;

    // taking input of number whose cube is  to be calculated 
    printf("enter the value of a: \n");
    scanf("%d", &a);

    // calculating the cube 
    cube = a*a*a;

    // printing the cube root 
    printf("cube of %d is: %d", a,cube);
return 0;
}