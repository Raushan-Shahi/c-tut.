#include <stdio.h>
    
int main()
{
    int a[100],n,i,j,flag=0;

    printf("Enter number of terms in array:\n");
    scanf("%d",&n);

    printf("Enter array elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            printf("%d, ",a[i]);
        }
    }

return 0;
}