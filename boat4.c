#include <stdio.h>
    
int main()
{
    // declaring an year variable 
    int year;

    //taking the input of year from user
    printf("enter the year to be checked:\n");
    scanf("%d",&year );

    //checking whether entered year is a leap year or not 
    if(year%400==0)
    {
        printf("the year is a leap year");
    }
    else if(year%100 == 0)
    {
        printf("it is not a leap year");
    }
    else if(year%4 == 0)
    {
        printf("the year is a leap year");
    }
    else 
    {
        printf("the year is not a leap year");
    }
return 0;
}