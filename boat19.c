#include<stdio.h>
int main()
{
    int A[3][3] , B[3][3] , row, col, flag=0; 
    
    // take the input of matrix A from user 
    printf("enter the elements in matrix A of size 3*3: \n") ;
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

    // calculating transpose of A
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            B[col][row] = A[row][col] ;
        }
    }

    printf("the transpose of matrix A is:\n");

    //printing transpose of matrix A
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d  ", B[row][col]);
        }
        printf("\n");
    }

    // comparing matrix A and matrix B
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(A[row][col] != B[row][col])
            {
            flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("matrix is symmetric");
    }
    else
    {
        printf("matrix is not symmetric");
    }
    
    return 0;
}