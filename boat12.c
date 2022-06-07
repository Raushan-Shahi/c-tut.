#include <stdio.h>
    
int main()
{
    // declaring required variables 
    int i,j, flag=0;

    // printing the prime numbers upto 100 
    printf("the prime numbers upto 100 are: ");
    for(i=2; i<=100; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
        printf("%d, ", i);
    }
return 0;
}