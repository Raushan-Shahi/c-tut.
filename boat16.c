#include <stdio.h>
    
int main()
{
    int a[100],b[100],n,i;
    printf("Enter number of terms in array:\n");
    scanf("%d",&n);

    printf("Enter array elements\n");
    for(i = 0; i < n; i++)
          scanf("%d",&a[i]);

    for(i=0; i<n; i++)
    {
        b[i]=a[n-i-1];
    }

    printf("reverse of input array is:");
    for(i=0; i<(n-1); i++)
    {
        printf("%d, ",b[i]);
    }
    printf("%d", b[(n-1)]);
return 0;
}