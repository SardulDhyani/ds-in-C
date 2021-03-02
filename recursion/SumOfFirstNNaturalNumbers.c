// SUM OF FIRST n NATUTAL NUMBERS USUING (RECURSION, FORMULA and LOOP)

#include <stdio.h>

int sum (int n) {
  if(n == 0)
    return 0;
  else
    return sum(n-1) + n;
}

int main() {
  printf("Sum of n Natural Numbers\n");
  
  printf("Using Recursion : %d\n", sum(7));

  int formulaSum = 7*(7+1) / 2; 
  printf("Using Formula : %d\n", formulaSum);

  int number = 7;
  int loopSum = 0;
  while(number > 0) {
    loopSum += number;
    number --;
  }
  printf("Using Loop : %d\n", loopSum);
  return 0;
}