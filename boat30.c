#include <stdio.h>
#include<string.h>

    
int main()
{
    // declaring the variables
    char str[100] ;
    char *p; 

    // declarng count variable for counting the string length 
    int count = 0 ;

    // taking input of the string 
    printf("enter a string:\n");
    scanf("%s", str);

    // address location 
    p = str;


    // counting the string length 
    while( *p != '\0')
    {
        count++;
        p++;
    }    

    // printing the string length 
    printf("the length of the string is: %d", count);

return 0;
}