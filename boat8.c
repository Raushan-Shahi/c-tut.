#include <stdio.h>
    
int main()
{

    // declaring the required variables
    int base, power, result=1;

    // taking input of base and power
    printf("enter the value of base: \n");
    scanf("%d", &base);
    printf("enter the value of power: \n");
    scanf("%d", &power);

    // calculating the power
    while(power !=0 )
    {
        result *= base;
        --power;
    }

    // printing the value
    printf("the value is %d",result);
return 0;
}