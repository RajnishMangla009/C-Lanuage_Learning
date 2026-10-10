#include <stdio.h>

void main(){

    int arr[5];

    int i = 0;
    while(i<5){
        printf("\n Enter Values for array at %d position: ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;
    while(i < 5){
        printf("%d\n", arr[i]);
        i++;
    }
}