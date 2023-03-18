/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  // declaring variables
  int s1, s2;
  float avg;

  // taking input for marks
  printf("Enter the marks of subject 1: ");
  scanf("%d", &s1);

  printf("Enter the marks of subject 2: ");
  scanf("%d", &s2);

  // calculating average
  avg = (s1 + s2) / 2;

  // displaying average marks
  printf("The average is: %.2f", avg);
  
  return 0;
}

