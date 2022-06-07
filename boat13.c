#include <stdio.h>
    
int main()
{
    // declaring the required variables 
    int n,i=1, value=1;

    // taking input of number whose factorial is to be calculated 
    printf("enter the value of n:\n");
    scanf("%d" , &n);

    while(i<=n)
    {
        value *=i;
        i++;
    }

    printf("the value of faclorial of %d is: %d ",n, value);
return 0;
}