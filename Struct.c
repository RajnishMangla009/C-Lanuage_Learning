
#include <stdio.h>

struct student {
  int roll;
  char name[50];
};

int main() {
  struct student s[100];
  int n, i;

  printf("Enter number of students: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("\nEnter details of student %d:\n", i + 1);

    printf("Enter roll number: ");
    scanf("%d", &s[i].roll);

    printf("Enter name: ");
    scanf("%s", s[i].name);
  }

  printf("\nStudent Records:\n");

  for (i = 0; i < n; i++) {
    printf("\nRoll Number: %d", s[i].roll);
    printf("\nName: %s", s[i].name);
  }

  return 0;
}
