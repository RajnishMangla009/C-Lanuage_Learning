#include <stdio.h>

void main() {
  int i, j, in, jn;

  printf("Enter Total Number of Rows: ");
  scanf("%d", &in);

  printf("Enter Total Number of Columns: ");
  scanf("%d", &jn);

  for (i = 1; i <= in; i++) {

    for (j = 1; j <= jn; j++) {
      printf("%d", j);
    }

    printf("\n");
  }
}