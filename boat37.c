//used strcmp feature of string.h library


#include <stdio.h>
#include <string.h>
    
int main()
{
    char st1[45]= "hello";
    char *st2 = "harry";
    char *st3= "hello";
    char *st4 = "he8lo";
    char *st5 = "hezlo";
    int value1 = strcmp(st1, st2);
    int value2 = strcmp(st1, st3);
    int value3 = strcmp(st1, st4);
    int value4 = strcmp(st1, st5);
    int value5 = strcmp(st2, st5);
    printf("%d\n",value1);
    printf("%d\n",value2);
    printf("%d\n",value3);
    printf("%d\n",value4);
    printf("%d\n",value5);
return 0;
}