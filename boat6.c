#include <stdio.h>
#include <math.h>
    
int main()
{
    // declaring required variables 
    int a,b,c ;
    float r1,r2,d, rp,ip ;

    // taking input of variables 
    printf(" enter the value of a,b,c:\n");
    scanf("%d %d %d", &a , &b , &c);

    // calculating discriminant 
    d= (b*b)-(4*a*c);
 
    //calculating roots 
    if(d>0)
    {
        r1 = ((-b) + sqrt(d))/(2*a);
        r2 = ((-b) - sqrt(d))/(2*a);
        printf("the roots of the given quadratic equation are %f , %f" , r1,r2);
    }
    else if(d==0)
    {
    r1 = r2 = -b/ (2*a);
    printf("the roots of the given quadratic equation are %f , %f" , r1,r2);
    }
    else
    {
        rp = (-b)/(2*a);
        ip = (sqrt(-d))/(2*a);
        printf("the roots of the given quadratic equation are %f+i%f , %f-i%f" , rp,ip,rp,ip);
    }
    
return 0;
}