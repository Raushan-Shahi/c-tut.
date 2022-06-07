#include<stdio.h>
int main()
{
    //declaring variables 
    int num1, num2, sum ;

    //taking input of two numbers 
    printf("enter the value of two numbers too be added");
    scanf("%d , %d", &num1,&num2);

    // adding two numbers 
    sum = num1 + num2;

    // printing the sum of two numbers 
    printf("sum of the two numbers %d and %d is %d", num1 , num2, sum);
    return 0;
}