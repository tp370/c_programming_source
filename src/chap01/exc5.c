// exc5.c example file iteraction, if then else
#include <stdio.h> // needed to do input and output

int main(int argc, char *argv[]) // argv is list of command line arguments
{                                // argc is count of command line arguments
    double x = 2.0;              //  declare test variable
    int i = 3;

    if (x < 3.0) // < > <= >= == != compare operations
    {
        printf("compare < >  <= >= == != x = %e \n", x);
    }

    if (x > 3.0 || i == 3 && i > 2) // || is or, &&  is and
    {
        printf("logic || is or, && is and i = %d \n", i);
    }

    if (x > 3.0)
    {
        printf(" x > 3.0 \n");
    }
    else if (i < 3) // optional
    {
        printf("i < 3 \n");
    }
    else // optional, get here is none of the above true
    {
        printf("none of the above \n");
    } // end if optional comment

    return 0;
} // end exc5.c optional comment