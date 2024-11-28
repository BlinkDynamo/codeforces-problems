/*------------------------------------------------------------
 * filename: anton_and_polyhedrons.c
 * author: Josh Hayden
 *
 * description: take in a number n strings of shape names 
 * and add up the number of their respective faces. output
 * this total number to stdout.
 *
 * regarding: https://codeforces.com/problemset/problem/785/A
 *-----------------------------------------------------------/

#include <stdio.h>
#include <string.h>

/* size of string buffer */
#define BUFSIZE 100

int main(int argc, char *argv[]) {
  
  /* number of input lines*/
  int n = 0;
  /* number of total sides counted */
  int total_sides = 0;

  /* note that the format specifier has no \n */
  scanf("%d", &n);  /* n input */

  for (int i=0; i<n; i++) {
    /* create a string shape and read in a line to shape */
    char shape[BUFSIZE];
    scanf("%s", &shape);
    
    /* strcmp each possible shape with char shape[BUFSIZE],
     * and if matching, add that amount to total_sides */
    if (strcmp(shape, "Tetrahedron") == 0) {
      total_sides += 4;
    }
    else if (strcmp(shape, "Cube") == 0) {
      total_sides += 6;
    }
    else if (strcmp(shape, "Octahedron") == 0) {
      total_sides += 8;
    }
    else if (strcmp(shape, "Dodecahedron") == 0) {
      total_sides += 12;
    }
    else if (strcmp(shape, "Icosahedron") == 0) {
      total_sides += 20;
    }
  }
  printf("%d\n", total_sides);
  return 0;
}
