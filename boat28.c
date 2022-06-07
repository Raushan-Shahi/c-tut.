//copying one array to another using pointers 


#include <stdio.h>
#include <conio.h>
    
int main()
{
    //declaring the variables 
    int *a, *b, *c, *d;
    int array1[100], array2[100] ; 
    int size , i;
    a = array1;
    b = array2;

    c=a;
    d=b;

    // declaring for last array address 
    int *j;

    // taking input for size of an array and the array  
    printf("enter the size of the array:\n");
    scanf("%d", &size);
    printf("enter elements in an array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",(a+i));
    }

    j = &array1[size-1];
    printf("%d",*j);
    while(a<=j )
    {
        *b = *a;
        a++;
        b++;
    }


    //printing the given array before copying 
    printf("\nthe original array:\n");
    for(i=0; i <size; i++)
    {
        printf("%d", *(c+i) );
    }

    // printing the copied array
    printf("\nthe copied array is: \n");
    for(i=0; i <size; i++)
    {
        printf("%d", *(d+i));
    }

return 0;
}