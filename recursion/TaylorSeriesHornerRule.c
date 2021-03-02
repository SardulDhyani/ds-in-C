#include<stdio.h>


double taylorSeries(int x, int n) {
  static double taylorSum = 1;
  if(n == 0)
    return taylorSum;

  taylorSum *= 1 + x/n; 
  return taylorSeries(x, n-1);
}

int main() {
  printf("Taylor Series \n");
  printf("Recursion : %lf \n", taylorSeries(3, 10));
  
  int  x = 3, n = 10;
  double taylor = 1;

  while (n > 0) {
    taylor *= 1 + (x/n);
    n --;
  }

  printf("Loop : %lf", taylor);
  
  return 0;
}