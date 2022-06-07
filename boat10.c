#include <stdio.h>
#include<math.h>
    
int main()
{
    // declaring the required variables 
    int a;
    float sq_root;

    // taking input for the number whose square root is to be calculated 
    printf("enter the value of a: \n");
    scanf("%d", &a);

    // calculating square root 
    sq_root = sqrt(a);

    // printing the square root
    printf("the square root of %d id %f", a, sq_root);

return 0;
}