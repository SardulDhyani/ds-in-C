
#include<stdio.h>

int f[10];

int fibonacci(int n) {
  if(n <= 1)
    return n;
  return fibonacci(n - 2) + fibonacci(n - 1);
}

int memoizationFibonacci(int n) {
  if(n <= 1) {
    f[n] = n;
    return n;
  } else {
    if(f[n-2] == -1)
      f[n-2] = memoizationFibonacci(n-2);
    if(f[n-1] == -1)
      f[n-1] = memoizationFibonacci(n-1);
    
    return f[n-2] + f[n-1];
  } 
}

int main() {
  for(int i = 0; i<10; i++)
    f[i] = -1;

  printf("RECURSION \n");
  printf("%d \t", fibonacci(3-1));

  memoizationFibonacci(7);
  printf("\nMemoization Fibonacci \n");

  for(int i = 0; i<10; i++) {
    if(f[i] != -1) 
      printf("%d \t",f[i]);
  }

  printf("\nLOOP \n");
  int term = 7, i = 0;
  int t0 = 0, t1 = 1, sum = 0;
  while (i < term) {
    printf("%d \t", sum);
    t0 = t1;
    t1 = sum;
    sum = t0 + t1;
    i++;
  }
  
  return 0;
}