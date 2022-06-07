#include<stdio.h>

int main()
{
    int A[3][3] , row, col, sum=0 ;
    // take the input of matrix A from user 
    printf("enter the elements in matrix in matrix A of size 3*3: \n") ;
    for(row = 0; row<3 ; row++) 
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]) ;
        }
    }

    //printing matrix A
    printf("the matrix A is: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d  ", A[row][col]);
        }
        printf("\n");
    }

    //adding the diagonal elements 
    for(row=0; row<3; row++)
    { 
        sum = sum + A[row][row];
    }
    printf("the sum of the diagonal elements are: ");
    printf("%d" , sum);
    return 0;

}