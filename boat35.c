// strcpy function of string library is used below


#include <stdio.h>
#include <string.h>


int main()
{
    char *st = "this";
    char st2[45];
    strcpy(st2, st);
    printf("now the st2 is %s", st2);
return 0;
}