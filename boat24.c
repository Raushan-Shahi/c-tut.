#include <stdio.h>
#include <string.h>

void reverse(char line[], int len)
{
    printf("\nenter the first line of your string:\n");
    gets(line);
    len = strlen(line);
    // Traverse string from end
    int i;
    for (i = len - 1; i >= 0; i--) {
        if (line[i] == ' ') {
 
            // putting the NULL character at the
            // position of space characters for
            // next iteration.
            line[i] = '\0';
 
            // Start from next character
            printf("%s ", &(line[i]) + 1);
        }
    }
 
    // printing the last word
    printf("%s", line);
}
    
int main()
{
    char str[100];
    int i,n, len;
    i=1;
    printf("enter the number of lines in your input:\n");
    scanf("%s", &n);
    while (i<=n)
    {
        reverse(str , len);
        i++ ;
    }
    
    return 0;
}