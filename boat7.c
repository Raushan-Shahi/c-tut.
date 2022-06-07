#include <stdio.h>
    
int main()
{
    //declaring three variables 
    int a,b,c;

    //taking input of three numbers
    printf("enter three integers to be compared: \n");
    scanf("%d %d %d", &a,&b,&c);

    // comparing the three numbers 
    if((a>=b)&&(a>=c))
    printf("%d is the largest number", a);

    else if((b>=a)&&(b>=c))
    printf("%d is the largest number", b);

    else
    printf("%d is the largest number", c);

return 0;
}