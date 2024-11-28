#include <stdio.h>
#include <string.h>

/* size of string buffer */
#define BUFSIZE 100

int main(int argc, char *argv[]) {
  
  /* number of input lines*/
  int n;
  /* number of total sides counted */
  int total_sides;

  scanf("%d\n", &n);  /* n input */

  for (int i=0; i<n; i++) {

    string shape;
    cin >> shape;

    switch(shape) {
      case "Tetrahedron":
        total_sides += 4;
        break;
      
      case "Cube":
        total_sides += 6;
        break;

      case "Octahedron":
        total_sides += 8;
        break;

      case "Dodecahedron":
        total_sides += 12;
        break;

      case "Icosahedron":
        total_sides += 20;
        break;
    }
  }
  cout << total_sides;
  return 0;
}
