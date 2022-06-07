#include<stdio.h>
int main()
{
    // declaring an array and some variables
    int array[100], n, i, j, temp; 

    // taking input of number of elements in array 
    printf("Enter number of elements:\n");
    scanf("%d", &n); 

    // taking input of n numbers 
    printf("the values of array\n");
    for(i = 0; i < n; i++)
    scanf("%d\n", &array[i]); 

    //sorting the data by bubble sort
    for(i = 0 ; i < n - 1; i++)
    {
        for(j = 0 ; j < (n-i-1); j++)
        {
            if(array[j] > array[j+1]) 
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    } 

    // printing the sorted data 
    printf("Sorted Array is: "); 
    for(i = 0; i < n; i++)
    printf("%d, ", array[i]);
    return 0;
}