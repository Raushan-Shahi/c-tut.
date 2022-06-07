#include <stdio.h>  
int main()
{
    int principal_amount , rate , time ;
    float simple_interest;

    printf("enter the value of principal amount");
    scanf("%d", principal_amount);
    printf("enter the value of rate of interest");
    scanf("%d",rate);
    printf("enter the value of time period");
    scanf("%d",time);

    simple_interest= (principal_amount*rate*time)/100;

    printf("the simple interest for given conditions is: %f", simple_interest);

return 0;
}