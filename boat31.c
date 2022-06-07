//Write a program to reverse a given string without using library function 


#include <stdio.h>
#include <string.h>


int main()
{
    char a[100], temp; 
    int i, l ;
    printf("Enter a string to be reversed: \n");
    scanf("%s", a);

    l = strlen(a) ;

    for(i=0; i<l/2; i++)
    {
        temp = a[i];
        a[i] = a[l-1];
        a[l-1] = temp;
        l--;
    }

    printf("The reversed string is:%s", a);
    
return 0;
}