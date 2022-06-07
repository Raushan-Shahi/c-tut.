#include <stdio.h>
    
int main()
{
    //declaring required variables 
    int n, a=0,b=1,c,d;

    // taking input of number of terms in fibonacci series 
    printf("enter the number of terms in the fibonacci series: ");
    scanf("%d", &n);

    // printing the fibonacci seiries
    printf("%d, %d, ",a,b);


    for(c=3; c<n ; c++)
    {
        d=a+b;
        printf("%d, ",d);
        a=b;
        b=d;
    }
    printf("%d",a+b);
    
return 0;
}