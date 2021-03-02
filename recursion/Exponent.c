// FIND EXPONENT OF A NUMBER (RECURSION AND LOOP)

#include<stdio.h>

int exponent (int num, int power) {
  if(power == 0) 
    return 1;
  else 
    return exponent(num, power-1) * num;
}

int fastExponent(int num, int power) {
  if(power == 0)
    return 1;
  if(power % 2 == 0) 
    return fastExponent(num * num, (power/2));
  else 
    return num * fastExponent(num * num, (power -1) / 2);
}

int main() {
  printf("Exponent \n");
  printf("Recursion : %d \n", exponent(2, 8));

  printf("Recursion (Fast Exponent) : %d \n", fastExponent(2, 8));

  int number = 2, power = 8, loopExponent = 1;
  if(power != 0) {
    while (power > 0) {
      loopExponent *= number;
      power --;
    }
  }
  
  printf("Loop : %d \n", loopExponent);

  int fastExponentNumber = 2, fastExponentPower = 8, fastExponentResult = 1;
  if(fastExponentPower != 0) {
    while(fastExponentPower > 0) {
      if(fastExponentPower % 2 == 0 ) {
        fastExponentResult *= fastExponentNumber * fastExponentNumber;
        fastExponentPower /= 2;
      } else {
        fastExponentResult *= fastExponentNumber * fastExponentNumber * fastExponentNumber;
        power = (power - 1) / 2;
      }
    }
  }

  printf("Fast Loop : %d", fastExponentResult);

  return 0;
}