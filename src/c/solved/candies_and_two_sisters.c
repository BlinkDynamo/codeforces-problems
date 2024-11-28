/*------------------------------------------------------------
 * filename: candies_and_two_sisters.c
 * author: Josh Hayden
 *
 * description: Given a number n candies, distribute them between
 * sisters Alice and Betty in such a way that each sister will
 * get an integer number of candies, Alice will get a greater
 * amount of candies than Betty, and all the candies will be
 * given out. The task is to calculate the number of ways to 
 * distribute exactly n candies between the sisters as described
 * above.
 *
 * regarding: https://codeforces.com/problemset/problem/1335/A
 *----------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  
  /* first line contants number of test cases t */
  int t = 0;
  scanf("%d", &t);
  
  for (int i=0; i<t; i++) {
    /* number of candies */
    int n = 0;
    scanf("%d", &n);
    
    /* if the number is less than 3 it does not satisfy
     * the conditions */
    if (n < 3) {
      printf("%d\n", 0);
    }
    /* otherwise the number of possible distributions is 
     * (n-1)/2, where n is rounded down. */
    else {
      if (n % 2 == 1) {
        printf("%d\n", (n-1)/2);
      }
      else {
        printf("%d\n", (n/2)-1);
      }
    }
  }
  return 0;
}
