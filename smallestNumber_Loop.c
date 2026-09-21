#include <stdio.h>

void main() {

  int num, small, n, i = 1, a;

  printf("Enter the total number of inputs: ");
  scanf("%d", &n);

  printf("Enter the number %d: ", i);
  scanf("%d", &a);
  i++;
  
  while (i <= n) {
    printf("Enter the number %d: ", i);
    scanf("%d", &num);
    i++;

    if (a > num) {
      a = num;
    }
  }
  printf("%d", a);
}