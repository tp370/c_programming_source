// exc4.c example file iteration, loops
#include <stdio.h> // needed to do input and output

int main(int argc, char *argv[]) // argc is count of command line arguments
                                 // argv is list of command line arguments
{
    int i;   // declare loop variable
    int mat[4][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}, {4, 5, 6}}; // 4 by 3 matrix
    int sum;

    for(i = 0; i<4; i++) // columns of mat
    {                   // the } could be at the end of previous line
        for(int j = 0; j<3; j++) // j only exists inside loop
        {
            sum += mat[i][j];
        } // end j optional comment           
    }  // printf("sum=%d \n", sum);

    for( i=2; i<=10; i+=2)
    {
        printf("i=%d \n", i); // even numbers
    }

    return 0;

}   // end exc4.c optional comment