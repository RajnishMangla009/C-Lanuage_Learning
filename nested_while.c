#include <stdio.h>

void main() {
  int a = 1, b = 1, i;

  while (a <= 4) {

    i = 1;

    while (i <= a) {

      printf(" %d ", b);
      i++;
      b++;

    }

    a++;

    printf("\n");

  }
