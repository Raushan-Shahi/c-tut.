#include <stdio.h>
#include <string.h>

int main ()
{
   int i = 0;
   char ch, s[1000];

   printf("Input a string\n");
   gets(s);
   
   while (s[i] != '\0') {
      ch = s[i];
      if (ch >= 'A' && ch <= 'Z')
         s[i] = s[i] + 32;
      else if (ch >= 'a' && ch <= 'z')
         s[i] = s[i] - 32;  
      i++;  
   }
   
   printf("%s\n", s);

   return 0;
}