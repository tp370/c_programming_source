// You need to be able to read and write files in various formats.
//  exc7.c example file write a file and read a file
#include <stdio.h> // needed to do input and output

int main(int argc, char *argv[]) // argc is count of command line arguments
// argv is list of command line arguments
{
    char filename[] = "myfile.txt";
    FILE *outp; // file handle pointer
    FILE *inp;
    char line[80];

    outp = fopen(filename, "w");
    if (outp == NULL)
    { // standard test when opening a file
        printf("file %s could not be opened for writing \n", filename);
        return 1; // tell uses there is a problem
    }

    fprintf(outp, "line 1 \n");
    fprintf(outp, "x=%f, y=%f \n", 1.2, 3.5);
    fprintf(outp, "last line \n");
    fclose(outp);
    printf("exc7.c wrote %s, now read that file \n", filename);

    inp = fopen(filename, "r");
    if (inp == NULL)
    { // standard test when opening a file
        printf("file %s could not be opened for reading\n", filename);
        return 1; // tell user there is a problem
    }
    while (!feof(inp))
    {
        fgets(line, 80, inp);
        printf("%s", line); // no newline in format, came in from file
        // could use fscanf(inp, "%d", &i); or other format needs &
    }
    fclose(inp);
    return 0;
} // end exc7.c optional comment