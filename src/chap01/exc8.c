// You need to be able to use a number of files combined to build a program.
// This is may include packages, libraries,
// operatingsystem commands, header files, etc.
// exc8.c example file use a function you wrote exc8sub.h exc8sub.c

// library functions to do input and output
#include <stdio.h>
#include "exc8sub.h" // note " " rather than < > because this is a local file
// need.h function prototype

int main(int argc, char *argv[])
{
    double big = exc8sub(5, 5); // 5^5 5**5
    printf("exc8.c running, using exc8sub.c exc8sub.h \n");
    printf("big = exc8sub(5, 5); \n");
    printf("big = %e \n", big);

    printf("exc8.c finished \n");
    return 0;

} // end exc8.c optional comment

