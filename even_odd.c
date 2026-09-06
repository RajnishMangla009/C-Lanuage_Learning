#include <stdio.h>
void main() {
  int a;

  printf("Enter the Number: ");
  scanf("%d", &a);

  if (a != 0 && a % 2 == 0) {
    printf("%d is even", a);
  } else if (a != 0 && a % 2 != 0) {
    printf("%d is odd", a);
  } else {
    printf("The number is zero");
  }
}