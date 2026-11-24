#include <stdio.h>

void main() {
  int size = 5;
  int i = 0;
  int j = size - 1;
  int arr[size];

  for(int k = 0; k < size; k++){
    scanf("%d", &arr[k]);
  }

  while (i < j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }

    for(int k = 0; k < size; k++){
    printf("%d", arr[k]);
  }

}