// used function strcat of string.h


#include <stdio.h>
#include <string.h>


int main()
{
    char st1[45]= "hello ";
    char *st2 =  "raushan";
    // strcat(st1, st2);
    // printf("now the string one is %s", st1);
    strcat(st2, st1);
    printf("now the string two is %s", st2);
return 0;
}