#include <stdio.h>

struct student {
  int roll;
  float marks;
};

union data {
  int roll;
  float marks;
};

int main() {
  struct student s;
  union data u;

  printf("Structure:\n");

  s.roll = 101;
  s.marks = 85.5;

  printf("Roll Number = %d\n", s.roll);
  printf("Marks = %.2f\n", s.marks);

  printf("\nUnion:\n");

  u.roll = 101;
  printf("Roll Number = %d\n", u.roll);

  u.marks = 85.5;
  printf("Marks = %.2f\n", u.marks);

  printf("\nSize of Structure = %zu bytes", sizeof(s));
  printf("\nSize of Union = %zu bytes", sizeof(u));

  return 0;
}
