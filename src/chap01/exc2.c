// exc2.c example file more complete structure, list, arrays, matrix

#include <stdio.h> // needed to do input and output

int main()
{
  int i = 1;             // optional initialization 32 bit
  short i16 = 1;         // 16 bit
  long i64 = 0xabcdef01; // 64 bit initialized with hexadecimal
                         // no boolean, int 0 for false, 1 for true
  float x = 39.27;
  double y = 127.5E200;
  char msg[6] = "short";  // char for string, 0 byte at end

  int vec[] = {1, 2, 4, 8};     // initialize an array, any type
  double av[] = {1.5, 2.2, 9.1};
  char as[3][4] = {"abc", "xyz", "more"};
  int mat[4][3] = {{1,2,3},{2,3,4},{3,4,5},{4,5,6}}; // 4 by 3 matrix

  int big[100];        // allocate space for 100 integers
  double small[5];     // space for 5 doubles
  double matrix[4][3]; // matrix 4 rows of 3 doubles

  matrix[3][2] = 1.0;  // subscripts start at zero 0,1,2,3 is 4 items
  printf("exc2.c running\n");
  printf("i=%d \n", i);
  printf("i16=%d \n", i16);
  printf("i64=%lx \n", i64);
  printf("i64=%ld \n", i64);
  printf("x=%f \n", x);
  printf("y=%e \n", y);

  return 0;
} // end exc2.c   optional comment
