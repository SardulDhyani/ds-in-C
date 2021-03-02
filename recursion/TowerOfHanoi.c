#include<stdio.h>

int towerOfHanoi(int n, int a, int b, int c) {
  if(n > 0) {
    towerOfHanoi(n-1, a, c, b);
    printf("Move tile from tower %d to %d \n", a, c);
    towerOfHanoi(n-1, b, a, c);
  }
}

int main() {
  towerOfHanoi(5, 1, 2, 3);
  return 0;
}