#include<stdio.h>
#include<stdlib.h>

int main() {
  int *p, *q;
  
  p = (int *) malloc(5 * sizeof(int));
  q = (int *) malloc(10 * sizeof(int));

  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 3;
  p[4] = 5;

  printf("P Before increasing size\n");
  for(int i = 0; i<5; i++)
    printf("%d\t", p[i]);

  for(int i = 0; i<5; i++)
    q[i] = p[i];

  free(p);

  p = q;
  q = NULL;

  printf("\n P after increasing size\n");
  
  for(int i = 0; i<10; i++)
      printf("%d\t", p[i]);

  return 0;
}