/*------------------------------------------------------------
 * filename: next_round.c
 * author: Josh Hayden
 *
 * description: Given an input of n participants and k-th
 * placement, calculate how many participants will advance
 * to the next round. The first line contains n and k, and 
 * the second line contains n participants, each represented
 * by their score. 
 *
 * regarding: https://codeforces.com/problemset/problem/158/A
 *----------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  
  int n_participants = 0;  
  int minimum_placement = 0;
  
  /* take in n_participants and minimum_placement */
  scanf("%d %d", &n_participants, &minimum_placement);
  
  /* create an array the size of n_participants. Note redundant
   * (int*) cast for C++ compatibility.  */
  int *arr_participants = (int*)malloc(n_participants * sizeof(int));
   
  /* allocation check */
  if (arr_participants == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  
 /* read the participants into arr_participants individually
  * for each digit */ 
  for (int i=0; i<n_participants; i++) {
    scanf("%d", &arr_participants[i]);
  }
  
  

  /* free allocated memory */
  free(arr_participants);

  return 0;
}
