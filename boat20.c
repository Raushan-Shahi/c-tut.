#include <stdio.h>
    
int main()
{
    // declaring a sorted array and some variables
    int a[]={1,2,3,4,5,6,7,8},i,l,h,m,search, flag=0;

    // taking input of number to be searched 
    printf("number to be serached:\n");
    scanf("%d", &search);

    // assigning limiting values to l,h and m 
    l=0;
    h=7;
    m=(l+h+1)/2;

    // searching for entered search value
    while (l<=h)
    {
        if(a[m]==search)
        {
        printf("searched number is present at %d location", m+1);
        flag=1;
        break;
        }
        else if(a[m]<search)
        {
        l=m+1;
        }
        else
        {
            h=m-1;
        }  
        m= (l+h)/2;
    }
    if(flag==0)
    {
        printf("there is no match for the searched number in the array");
    }
    

return 0;
}