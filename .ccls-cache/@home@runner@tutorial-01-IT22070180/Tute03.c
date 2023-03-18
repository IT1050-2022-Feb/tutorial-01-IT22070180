/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  // declaring variables
  int n = 0, sum = 0;

  // taking input for 'n'
  printf("Enter the value of 'n': ");
  scanf("%d", &n);

  // for loop to get sum
  for (int i = 1; i <= n; i++) {
    sum = sum + i;
  }

  // displaying total sum
  printf("The sum is: %d", sum);
  return 0;
}

