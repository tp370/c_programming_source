// Program to output an integer, a string, and a floating point number, initially just one method.
// file exc1.c src code

// first example simple output integer, string, double
// 		note // makes rest of line a comment

#include <stdio.h> // needed to do input and output
                   //
int main()
{                               // short version to start main program { to }
  int i = 7;                    // declare variable i with initial value 7
  char ac = 'a';                // single character
  char msg[] = "sample string"; // declare msg with string in quotes
  float x = 37.95;              // declare floating point x with initial value
  double y = 127.34e10;         // declare double precision with initial value

  printf("exc1 running\n"); // simple print title
  printf("i=%d \n", i);     // %d for decimal \n for the end of line
  printf("ac=%c \n", ac);   // %c for character
  printf("msg=%s \n", msg); // %s for string
  printf("x=%f \n", x);     // %f for simple floating point
  printf("y=%e \n", y);     // %e for double with exponent
                            // many other % choices

                            return 0; // standard end of C main proram
}
