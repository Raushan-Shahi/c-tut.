#include <stdio.h>
    
int main()
{
    //declaring a variable 
    int a;

    //taking input of the variable a 
    printf("enter the number to be checked: \n");
    scanf("%d",&a);

    //checking and printing whether the input is even or odd by if-else statement
    if(a%2==0)
    {
        printf("The number %d is an even number ", a);
    }
    else
    {
        printf("The number %d is an odd number", a);
    }
    
return 0;
}