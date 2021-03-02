// FACTORIAL OF A NUMBER USING RECURSION

#include <stdio.h>

int fact (int n) {
  if(n == 0 || n == 1)
    return 1;
  else
    return fact(n-1) * n;
}

int main() {
  printf("FACTORIAL OF A NUMBER \n");

  printf("Recursion : %d \n", fact(5));

  int number = 5;
  int loopSum = 1;
  if( number == 0 || number == 1) {
    loopSum = 1;
  } else {
    while (number > 0) {
      loopSum *= number;
      number --; 
    }
  }
  printf("Loop : %d", loopSum);
  return 0;
}