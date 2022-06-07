#include <stdio.h>
#include <string.h>

int main()
{
    char str[20]="MNITJAIPUR";
    int s = strlen(str);
    str[3]='\0';
    s = strlen(str);
    printf("%d",s);
return 0;
}
