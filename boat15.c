#include<stdio.h>
int main()
{
   
    int array[100], size, i ;
    float average,sum = 0.0;
    
    //taking input for size of array
    printf("Enter array size\n");
    scanf("%d",&size);
    
    //taking input of n numbers 
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&array[i]);
          
    //add all elements to the variable sum.
    for(i = 0; i < size; i++)
          sum = sum + array[i]; 
    
    //print the result
    printf("Sum of the array = %f\n",sum);

    // calculating and printing average 
    average = sum/size;
    printf("the average of %d numbers is: %f",size , average);

    return 0;
}