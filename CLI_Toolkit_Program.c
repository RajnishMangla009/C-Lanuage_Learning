#include <stdio.h>
int a;
int b;
int n;

void sum(int a, int b) {
  int c = a + b;
  printf("The sum is %d \n\n", c);
};
void min(int a, int b) {
  if (a > b) {
    printf("%d is smallest \n\n", b);
  } else {
    printf("%d is smallest \n\n", a);
  }
}
void max(int a, int b) {
  if (a > b) {
    printf("%d is biggest \n\n", a);
  } else {
    printf("%d is biggest \n\n", b);
  }
}
void evenOdd(int n) {
  if (n % 2 == 0) {
    printf("The Number is Even \n\n");
  } else {
    printf("The Number is Odd \n\n");
  }
}
void fact(int n) {
  int facto;
  for (facto = 1; n > 0; n--) {
    facto = facto * n;
  }
  printf("The factoral is %d \n\n", facto);
}
void exitP() { printf("---EXIT--- \n\n"); }

void two_input() {
  printf("Enter the First Number: ");
  scanf("%d", &a);

  printf("Enter the Second Number: ");
  scanf("%d", &b);
}

void one_input() {
  printf("Enter the Number: ");
  scanf("%d", &n);
}

void menu(int in) {
  switch (in) {
  case 1:
    sum(a, b);
    break;
  case 2:
    min(a, b);
    break;
  case 3:
    max(a, b);
    break;
  case 4:
    evenOdd(n);
    break;
  case 5:
    fact(n);
    break;
  case 6:
    exitP();
    break;
  default:
    printf("Invalid Input");
    break;
  }
}

void ins() {
  printf("Press 1 for Addition \n");
  printf("Press 2 for Minimum \n");
  printf("Press 3 for Maximum \n");
  printf("Press 4 to Find if the Number is Even or Odd \n");
  printf("Press 5 to Find the Factoral \n");
  printf("Press 6 to Exit \n");
}

int main() {

  int choice;

  do {
    printf("____ CLI TOOLKIT _____\n");
    ins();

    printf("Press any Key: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
      two_input();
    } else if (choice >= 4 && choice <= 5) {
      one_input();
    }

    menu(choice);
  } while (choice < 6);
  return 0;
}
