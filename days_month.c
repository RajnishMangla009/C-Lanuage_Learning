#include <stdio.h>

void main(){
    int Month;

    printf("Enter Month: ");
    scanf("%d", &Month);

    switch(Month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 Days");
        break;

        case 2:
        printf("28 Days");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 days");
        break;

        default:
        printf("Invalid Input");
        break;
    }
}