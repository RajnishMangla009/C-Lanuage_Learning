#include <stdio.h>

int sum(int arr[], int n);
int avg(int arr[], int n);
int max(int arr[], int n);
int min(int arr[], int n);
int exit();

void main() {
  int size = 0;
  int opt;

  printf("\n----ARRAY STATISTICS TOOL----\n");

  printf("\nEnter the size of Array:");
  scanf("%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++) {
    printf("\nEnter the values of Array: ");
    scanf("%d", &arr[i]);
  }

  do {
    printf("\nChoose an operation: \n");
    printf(" Press 1 for Addition\n Press 2 for Calculating Average\n Press 3 for finding Maximum\n Press 4 for finding Minimum\n Press 5 to Exit\n");
    printf("Select an Option: ");
    scanf("%d", &opt);

    switch (opt) {
    case 1:
      printf("Sum = %d\n", sum(arr, size));
      break;

    case 2:
      printf("Avg  = %d\n", avg(arr, size));
      break;
    case 3:
      printf("Max = %d\n", max(arr, size));
      break;
    case 4:
      printf("Min = %d\n", min(arr, size));
      break;
    case 5:
      exit();
      break;
    default:
      printf("---INVALID SELECTION---");
      break;
    }
  } while (opt != 5);
}

int sum(int arr[], int n) {
  int s = 0;
  for (int i = 0; i < n; i++) {
    s = s + arr[i];
  }
  return s;
}

int avg(int arr[], int n) {
  float s = sum(arr, n);

  return s / n;
}

int max(int arr[], int n) {

  int maxVal = arr[0];

  for (int i = 0; i < n; i++) {

    if (maxVal < arr[i]) {
      maxVal = arr[i];
    }
  }

  return maxVal;
}

int min(int arr[], int n) {

  int minVal = arr[0];

  for (int i = 0; i < n; i++) {

    if (minVal > arr[i]) {
      minVal = arr[i];
    }
  }

  return minVal;
}

int exit() { 
  printf("----EXIT----"); 
  return 0;
}
