/*------------------------------------------------------------
 * filename: sum_of_round_numbers.c
 * author: Josh Hayden
 *
 * description: Return the number n as a summation of round 
 * numbers using the minimum amount of summands (addends).
 *
 * regarding: https://codeforces.com/problemset/problem/1352/A
 *----------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/* returns the absolute value of x */
int absolute(int x) {
  return (x<0) ? -x : x;
}

/* returns the result of base^exponent */
int power(int base, int exponent) {
  int result = 1;
  for (int i=0; i<exponent; i++) {
    result *= base;
  }
  return result;
}

/* returns a digit given a number, num_digits in the number, and
 * the digit_index of the digit you are searching for */
int get_digit(int number, int num_digits, int digit_index) {
  /* to remove digits to the right of the target digit, we 
   * divide by 10 (num_digits - digit_index - 1) times. */
  int divisor = 1;
  for (int i=0; i<num_digits - digit_index - 1; i++) {
    divisor *= 10;  /* multiply by 10 each time to shift digits */
  }
  /* now the digit can be extracted at the digit_index position.
   * divide to shift digits, then take modulo 10 to get the digit */
  int target_digit = (number / divisor) % 10;

  return target_digit;
}

int main(int argc, char *argv[]) {
  
  /* take in number of test cases t */
  int t = 0;
  scanf("%d", &t);

  for (int i=0; i<t; i++) {
    /* take in number to re-represent as summands n */
    int n = 0;
    scanf("%d", &n);

    int num_digits = 0;
    int temp = n;
    /* special case for 0 to avoid dividing by 0 */
    if (n == 0) {
      num_digits = 1;
    }
    /* other wise keep dividing by 10 until the number is a 
     * 0.X decimal to find its number of digits */
    else {
      while (temp > 0) {
        temp /= 10;
        num_digits++;
      }
    }
    /* for each digit starting from the rightmost digit, if it is
     * non-zero,do non_zero_digit * 10^num_digits and display that
     * number to stdout */
    int n_round_numbers = 0;
    
    /* find the number of round numbers before doing the final
     * calculation */
    for (int digit_index=(num_digits-1); digit_index>=0; digit_index--) {
      int digit = get_digit(n, num_digits, digit_index);
      if (digit != 0) {
        n_round_numbers++;
      }
    }
    printf("%d\n", n_round_numbers);
    
    /* now find each summand */
    for (int digit_index=(num_digits-1); digit_index>=0; digit_index--) { 
      int digit = get_digit(n, num_digits, digit_index);
      if (digit != 0) {
        int summand = digit * power(10, absolute((num_digits-1)-digit_index));
        printf("%d ", summand);
      }
    } 
    printf("\n");
  }
  return 0;
}
