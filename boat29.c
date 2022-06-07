#include <stdio.h>
#include <string.h>


int main()
{
    // declaring variables
    char str[100] ; 
    int l,i;
    char *a , *b , c;

    // taking input of string 
    printf("enter a string:\n");
    scanf("%s", str);

    // length of string 
    l = strlen(str);

    // reversing string 
    a = str;
    b=str;

    for(i=0; i<l-1; i++)
    b++;

    for(i=0; i<l/2; i++)
    {
        c = *b;
        *b=*a;
        *a = c;

        a++;
        b--;
    }
    
    // printing the reversed string 
    printf("the reversed string is:%s\n", str);

return 0;
}