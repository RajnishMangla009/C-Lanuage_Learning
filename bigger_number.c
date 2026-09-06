#include <stdio.h>
void main() {
  int a, b;

  printf("Enter First Number: ");
  scanf("%d", &a);

  printf("Enter Second Number: ");
  scanf("%d", &b);

  if (a > b) {
    printf("%d is bigger than %d", a, b);
  } else if (b > a) {
    printf("%d is bigger than %d", b, a);
  } else {
    printf("Both Numbers are Equal");
  }
}