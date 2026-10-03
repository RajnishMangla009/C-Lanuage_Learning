#include <stdio.h>

void max(int a, int b, int c);

void main() {
  int a_value, b_value, c_value;

  printf("Enter the Value of A: ");
  scanf("%d", &a_value);

  printf("Enter the Value of B: ");
  scanf("%d", &b_value);

  printf("Enter the Value of C: ");
  scanf("%d", &c_value);

  max(a_value, b_value, c_value);
}

void max(int a, int b, int c) {

  if (a == b) {

    printf("A and B are Equal");

  } else if (b == c) {

    printf("B and C are Equal");

  } else if (a == c) {

    printf("A and C are Equal");

  } else if (a == b == c) {

    printf("A, B and C are Equal");

  } else if (a > b && a > c) {

    printf("A is the Biggest Number");

  } else if (b > a && b > c) {

    printf("B is the Biggest Number");

  } else if (c > a && c > b) {

    printf("C is the Biggest Number");
  }
}