/*------------------------------------------------------------
 * filename: games.c
 * author: Josh Hayden
 *
 * description: You are given a number of games n. Each of these
 * games is represented by a stdin line of two ints, seperated by
 * a space. These numbers represent the jersey colors of home and 
 * away for each game. Determine the number of games where the 
 * jersey colors (or numbers rather) will match.
 *
 * regarding: https://codeforces.com/problemset/problem/268/A
 *----------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  int n = 0;
  int games_with_host_wearing_guest_uniform = 0;
  scanf("%d", &n);
  
  /* create pointers the size of int * n since arrays must be implicitly
   * typed */
  int *home = malloc(sizeof(int) * n);
  int *away = malloc(sizeof(int) * n);
  
  /* for each home team, check if any away teams match their jersey, and if
   * so, increment games_with_host_wearing_guest_uniform by 1 */
  for (int i=0; i<n; i++) {
    scanf("%d %d", &home[i], &away[i]);
  }

  for (int homeid=0; homeid<n; homeid++) {
    for (int awayid=0; awayid<n; awayid++) {
      if (home[homeid] == away[awayid]) {
        games_with_host_wearing_guest_uniform += 1;
      }
    }
  }
  
  printf("%d\n", games_with_host_wearing_guest_uniform);  

  return 0;
}
