// Write a program to check whether given string is  palindrome 
// or not without using library functions.


#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], r_a[100] ; 
    int i , l=0, flag=0;

    printf("Enter a string: \n");
    scanf("%s", a);

    l= strlen(a);

    for(i=l-1; i>=0; i--)
    {
        r_a[l-i-1] = a[i];
    }

    for(i=0; i<l; i++)
    {
        if(r_a[i] !=a[i]);
        flag=1;
    }

    if(flag==1)
        printf("%s is a palindrome \n",a);
    else
        printf("%s is not a palindrome \n",a);

return 0;
}