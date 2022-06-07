#include <stdio.h>
    
int sum_cube(int a)
{
   int result;
   if(a==1)
   {
       return (1);
   }
   else
   {
       result = a*a*a + sum_cube(a-1);
   }
   return (result);
}

int main()
{
    int n, sum;
    printf("enter the number of terms in your series:\n");
    scanf("%d", &n);
    sum = sum_cube(n);
    printf("sum of cubic terms upto %d is:\n%d ", n,sum);

return 0;
}