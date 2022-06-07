#include <stdio.h>
    
int main()
{

    // declaring the required variables 
    int n,i,a=0;

    // taking input of the required variables 
    printf("enter the value of n:\n");
    scanf("%d" , &n);

    // printing the first n numbers 
    printf("printing the first %d numbers\n",n);
    for(i=1; i<=n ; i++)
    {
        printf("%d\n",i);
        a += i;
    }

    // printing the sum of first n numbers 
    printf("the sum of the first %d numbers is: %d",n, a);
return 0;
}