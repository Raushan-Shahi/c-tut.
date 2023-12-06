#include <stdio.h>
#include <string.h>

int main()
{
    char str[20]="MNITJAIPUR";
    int s = strlen(str);
    printf("%d\n", s);
    str[3]='\0';
    s = strlen(str);
    printf("%d\n",s);
    printf("%s", str);
return 0;
}
