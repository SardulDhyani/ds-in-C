#include<stdio.h>

int factorial(int n) {
  if(n <= 1)
    return 1;
  return factorial(n-1) * n;
}

int combinationPascalsTriangle(int n, int r) {
  if(n == 0 || r == 0 || n == r)
    return 1;
  return combinationPascalsTriangle(n-1, r-1) + combinationPascalsTriangle(n-1, r);
}

int main() {
  printf("Using Factorial Method \n");
  int n = 4, r = 4, combination = 0;
  combination = factorial(n) / (factorial(r) * factorial(n-r));
  printf("%d\n", combination);

  printf("Using Pascals Triangle method \n");
  printf("%d ", combinationPascalsTriangle(4, 4));
  return 0;
}