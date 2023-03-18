/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
// functions declaration
int minimum(int n1, int n2);
int maximum(int n1, int n2);
int multiply(int n1, int n2);

// main function
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

// function to calculate minimum between 2 values
int minimum(int n1, int n2) {
  // declaring variables
  int min;

  // checking minimum value between n1 and n2
  if (n1 >= n2) {
    min = n2;
  } else {
    min = n1;
  }

  // return statement
  return min;
}

// function to calculate maximum between 2 values
int maximum(int n1, int n2) {
  // declaring variables
  int max;

  // checking maximum value between n1 and n2
  if (n1 >= n2) {
    max = n1;
  } else {
    max = n2;
  }

  // return statement
  return max;
}

// function to calculate multiplication of 2 values
int multiply(int n1, int n2) {

  // return statement
  return (n1 * n2);
}