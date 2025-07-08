// exc6.c example file create function or procedure and call
// You need to be able to create a functions, procedures, subroutines.

#include <stdio.h> // needed to do input and output

// Function prototypes
void proc1(int i);                // void means no return value, this i is local
int funct1(int i, int j);         // int is return type
double sum(int n, double A[n][n]); // note; not { here
int ret2(int i, int *j);           // pass j by address

int main(int argc, char *argv[]) // argc is count of command line arguments
{                                // argv is list of command line arguments
    int i, j;
    double arr[2][2] = {{1.0, 2.0}, {3.0, 4.0}};
    double val;

    // call proc1, code above
    proc1(7);
    // use funct1
    i = funct1(2, 3);
    printf("funct1(2,3) returns %d \n", i);
    val = sum(2, arr); // code below
    printf("sum(2, arr) = %f \n", val);
    i = ret2(i, &j); // pass j by address
    printf("ret2 i= %d, j = %d \n", i, j);

    return 0;
} // end main optional comment

// Function definitions
void proc1(int i)            // void means no return value, this i is local
{                            // could be at the end of previous line
    printf("proc1 called with i= %d \n", i);
    return; // optional, yet good practice
} // end proc1 optional comment



int funct1(int i, int j) // int is return type
{
    int sum; // optional return variable
    sum = i + j;
    return sum; // could have been return i+j;
}

// typical place for functions and procedures used only in this program
double sum(int n, double A[n][n])
{
    double asum = 0.0;
    for (int i = 0; i < n; i++) // for exactly one statement, no {} ok
        for (int j = 0; j < n; j++)
            asum += A[i][j];
    A[n - 1][n - 1] = 0.0; // can change values in an array
    return asum;
} // end asum optional comment

int ret2(int i, int *j) // all uses of j are *j
{
    *j = i + 2; // second formal parameter changed
    return i + 1;
} // end ret2 optional comment

// end exc6.c optional comment