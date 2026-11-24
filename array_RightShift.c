#include <stdio.h>

void main(){
    int size = 5;
    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter the Number: ");
        scanf("%d", & arr[i]);
    }

    int temp = arr[0];


    for(int i = 1; i < size; i++){
        arr[i-1] = arr[i];
    }

    arr[size - 1] = temp;

    printf("Output After Shifting");

    for(int i = 0; i<size; i++){
        printf(" %d ", arr[i]);
    }
}