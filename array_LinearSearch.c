#include <stdio.h>

void main() {
  int size = 5;
  int arr[size];

  for (int i = 0; i < size; i++) {
    printf("Enter The Number: ");
    scanf("%d", &arr[i]);
  }

  int search = 0;
  printf("Enter the number you want to Find: ");
  scanf("%d", &search);

  int found = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] == search) {
      found = 1;
      printf("Found at %d Place in Array", i);
      break;
    }
  }

  if(found == 0){
    printf("Number Not Found!");
  }
}