#include <stdio.h>

void read(int a[10][10], int m, int n);
void display(int a[10][10], int m, int n);
void add(int a[10][10], int b[10][10], int c[10][10], int m, int n);

void main() {
  int a[10][10], b[10][10], c[10][10];
  int m, n;

  printf("Enter rows and columns: ");
  scanf("%d%d", &m, &n);

  printf("Enter first matrix:\n");
  read(a, m, n);

  printf("Enter second matrix:\n");
  read(b, m, n);

  printf("First matrix:\n");
  display(a, m, n);

  printf("Second matrix:\n");
  display(b, m, n);

  add(a, b, c, m, n);

  printf("Addition of matrices:\n");
  display(c, m, n);
}

void read(int a[10][10], int m, int n) {
  int i, j;

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
}

void display(int a[10][10], int m, int n) {
  int i, j;

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}

void add(int a[10][10], int b[10][10], int c[10][10], int m, int n) {
  int i, j;

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}
