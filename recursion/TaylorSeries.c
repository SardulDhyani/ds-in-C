#include<stdio.h>

double taylorSeries(int x, int n) {
  static double power = 1, factorial = 1;
  double r;

  if(n == 0)
    return 1;

  r = taylorSeries(x, n-1);
  power *= x;
  factorial *= n;

  return r + (power / factorial);
}

int main() {
  printf("Taylor Series (e^x) :  %lf", taylorSeries(1, 10));
  return 0;
}